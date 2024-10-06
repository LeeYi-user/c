#include <ncursesw/ncurses.h>
#include <locale.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <vector>

typedef struct
{
    int x, y;
} unit;

int screen[19][19], face = 3;

int kbhit(void)
{
    nodelay(stdscr, TRUE);
    noecho();

    int ch = getch(), state = 0;

    if (ch == 'w' || ch == 'a' || ch == 's' || ch == 'd')
    {
        state = 1;
        ungetch(ch);
    }

    echo();
    nodelay(stdscr, FALSE);

    return state;
}

int main(void)
{
    setlocale(LC_ALL, "");
    initscr();
    srand(time(NULL));

    int count = 0, press = 0;
    unit food = {9, 14}, body = {9};
    std::vector<unit> snake;

    for (int i = 5; i >= 3; i--)
    {
        body.y = i;
        snake.push_back(body);
    }

    while (1)
    {
        for (int i = 0; i < 19; i++)
        {
            for (int j = 0; j < 19; j++)
            {
                screen[i][j] = 0;

                if (i == food.x && j == food.y)
                {
                    screen[i][j] = 1;
                }
            }
        }

        for (int i = 0; i < snake.size(); i++)
        {
            if (screen[snake[i].x][snake[i].y] == 1)
            {
                loop: food = {rand() % 19, rand() % 19};
                for (int j = 0; j < snake.size(); j++)
                {
                    if (food.x == snake[j].x && food.y == snake[j].y)
                    {
                        goto loop;
                    }
                }

                snake.push_back(body);
            }

            screen[snake[i].x][snake[i].y] = 2;
        }

        for (int i = 0; i < 19; i++)
        {
            for (int j = 0; j < 19; j++)
            {
                if (screen[i][j] == 0)
                {
                    printw("\u25a1");
                }
                else if (screen[i][j] == 1)
                {
                    printw("\u25c6");
                }
                else
                {
                    if (i == snake[0].x && j == snake[0].y)
                    {
                        printw("\u25cf");
                    }
                    else
                    {
                        printw("\u25a0");
                    }
                }
            }

            printw("\n");
        }

        refresh();

        while (count < 125 && kbhit() == 0)
        {
            count++;
            usleep(1000);
        }

        if (kbhit() == 1)
        {
            char button = getch();

            if (press == 0)
            {
                if (button == 'w' && (face == 1 || face == 3))
                {
                    face = 0;
                }
                else if (button == 'a' && (face == 0 || face == 2))
                {
                    face = 1;
                }
                else if (button == 's' && (face == 1 || face == 3))
                {
                    face = 2;
                }
                else if (button == 'd' && (face == 0 || face == 2))
                {
                    face = 3;
                }

                press = 1;
            }
        }

        if (count == 125)
        {
            if (face == 0)
            {
                body.x = snake[0].x - 1;
                body.y = snake[0].y;
            }
            else if (face == 1)
            {
                body.x = snake[0].x;
                body.y = snake[0].y - 1;
            }
            else if (face == 2)
            {
                body.x = snake[0].x + 1;
                body.y = snake[0].y;
            }
            else
            {
                body.x = snake[0].x;
                body.y = snake[0].y + 1;
            }

            if (body.x < 0 || body.x > 18 || body.y < 0 || body.y > 18)
            {
                break;
            }

            for (int i = 0; i < snake.size(); i++)
            {
                if (body.x == snake[i].x && body.y == snake[i].y)
                {
                    goto stop;
                }
            }

            snake.insert(snake.begin(), body);
            body = snake.back();
            snake.pop_back();
            count = 0;
            press = 0;
        }

        clear();
    }

    stop: getch();
    endwin();
}
