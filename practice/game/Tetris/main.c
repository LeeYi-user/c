#include <ncursesw/ncurses.h>
#include <locale.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int playfield[21][10] = {0};

int type, face = 0, x = 0, y = 3;

int block[7][4][4][4] =
{
    {
        {
            {0, 0, 0, 0},
            {1, 1, 1, 1},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 0, 1, 0},
            {0, 0, 1, 0},
            {0, 0, 1, 0},
            {0, 0, 1, 0}
        },
        {
            {0, 0, 0, 0},
            {0, 0, 0, 0},
            {1, 1, 1, 1},
            {0, 0, 0, 0}
        },
        {
            {0, 1, 0, 0},
            {0, 1, 0, 0},
            {0, 1, 0, 0},
            {0, 1, 0, 0}
        }
    },
    {
        {
            {1, 0, 0, 0},
            {1, 1, 1, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 1, 1, 0},
            {0, 1, 0, 0},
            {0, 1, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 0, 0, 0},
            {1, 1, 1, 0},
            {0, 0, 1, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 1, 0, 0},
            {0, 1, 0, 0},
            {1, 1, 0, 0},
            {0, 0, 0, 0}
        }
    },
    {
        {
            {0, 0, 1, 0},
            {1, 1, 1, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 1, 0, 0},
            {0, 1, 0, 0},
            {0, 1, 1, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 0, 0, 0},
            {1, 1, 1, 0},
            {1, 0, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {1, 1, 0, 0},
            {0, 1, 0, 0},
            {0, 1, 0, 0},
            {0, 0, 0, 0}
        }
    },
    {
        {
            {0, 1, 1, 0},
            {0, 1, 1, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 1, 1, 0},
            {0, 1, 1, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 1, 1, 0},
            {0, 1, 1, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 1, 1, 0},
            {0, 1, 1, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        }
    },
    {
        {
            {0, 1, 1, 0},
            {1, 1, 0, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 1, 0, 0},
            {0, 1, 1, 0},
            {0, 0, 1, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 0, 0, 0},
            {0, 1, 1, 0},
            {1, 1, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {1, 0, 0, 0},
            {1, 1, 0, 0},
            {0, 1, 0, 0},
            {0, 0, 0, 0}
        }
    },
    {
        {
            {0, 1, 0, 0},
            {1, 1, 1, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 1, 0, 0},
            {0, 1, 1, 0},
            {0, 1, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 0, 0, 0},
            {1, 1, 1, 0},
            {0, 1, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 1, 0, 0},
            {1, 1, 0, 0},
            {0, 1, 0, 0},
            {0, 0, 0, 0}
        }
    },
    {
        {
            {1, 1, 0, 0},
            {0, 1, 1, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 0, 1, 0},
            {0, 1, 1, 0},
            {0, 1, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 0, 0, 0},
            {1, 1, 0, 0},
            {0, 1, 1, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 1, 0, 0},
            {1, 1, 0, 0},
            {1, 0, 0, 0},
            {0, 0, 0, 0}
        }
    }
};

void draw(int color)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (block[type][face][i][j] == 1)
            {
                playfield[x + i][y + j] = color;
            }
        }
    }
}

int check(int a, int b, int c)
{
    if (face + a == 4)
    {
        a = -3;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (block[type][face + a][i][j] == 1)
            {
                if (x + i + b >= 21 || y + j + c >= 10 || y + j + c < 0 || playfield[x + i + b][y + j + c] == 1)
                {
                    return 0;
                }
            }
        }
    }

    return 1;
}

int kbhit(void)
{
    nodelay(stdscr, TRUE);
    noecho();

    int ch = getch(), state = 0;

    if (ch == 'a' || ch == 'd' || ch == 's' || ch == ' ')
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
    type = rand() % 7;

    int move_1 = 1, move_2 = 1, count = 0;

    while (1)
    {
        draw(1);

        if (move_2 == 0)
        {
            type = rand() % 7;
            face = 0;
            x = 0;
            y = 3;

            move_1 = 1;
            move_2 = 1;
            count = 0;

            for (int i = 0; i < 21; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    if (playfield[i][j] == 1)
                    {
                        count++;
                    }
                }

                if (count == 10)
                {
                    for (int j = 0; j < 10; j++)
                    {
                        playfield[i][j] = 0;
                    }

                    for (int j = i; j > 0; j--)
                    {
                        for (int k = 0; k < 10; k++)
                        {
                            playfield[j][k] = playfield[j - 1][k];
                        }
                    }

                    for (int j = 0; j < 10; j++)
                    {
                        playfield[0][j] = 0;
                    }
                }

                count = 0;
            }

            continue;
        }

        for (int i = 0; i < 21; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (playfield[i][j] == 1)
                {
                    printw("\u25a0");
                }
                else
                {
                    printw("\u25a1");
                }
            }

            printw("\n");
        }

        draw(0);

        if (move_2 == 1)
        {
            if (check(0, 1, 0) == 1)
            {
                x++;
            }
            else
            {
                move_1 = 0;
            }
        }

        refresh();

        while (count < 1000 && kbhit() == 0)
        {
            count++;
            usleep(1000);
        }

        if (count == 1000)
        {
            count = 0;

            if (move_1 == 0)
            {
                move_2 = 0;
            }
        }

        if (kbhit() == 1)
        {
            if (move_1 == 1)
            {
                x--;
            }

            if (move_2 == 1)
            {
                char button = getch();

                if (button == 'a' && check(0, 0, -1) == 1)
                {
                    y--;
                }
                else if (button == 'd' && check(0, 0, 1) == 1)
                {
                    y++;
                }
                else if (button == 's' && check(0, 1, 0) == 1)
                {
                    x++;
                    count = 0;
                }
                else if (button == ' ' && check(1, 0, 0) == 1)
                {
                    face++;

                    if (face == 4)
                    {
                        face = 0;
                    }
                }
            }
        }

        if (move_1 == 0 && check(0, 1, 0) == 1)
        {
            move_1 = 1;
        }

        clear();
    }

    getch();
    endwin();
}
