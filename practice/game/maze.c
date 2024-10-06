#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int map[8][8] =
{
    {1, 1, 1, 1, 1, 1, 0, 1},
    {1, 0, 0, 0, 1, 1, 0, 1},
    {1, 1, 1, 0, 1, 1, 0, 1},
    {1, 1, 1, 0, 1, 1, 0, 1},
    {1, 0, 0, 0, 1, 1, 0, 1},
    {1, 0, 1, 0, 1, 1, 0, 1},
    {1, 0, 1, 0, 0, 0, 0, 1},
    {1, 0, 1, 1, 1, 1, 1, 1}
};

int playerX = 7, playerY = 1;

int main(void)
{
    while (1)
    {
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (i == playerX && j == playerY)
                {
                    printf("\u25c7");
                }
                else if (map[i][j] == 0)
                {
                    printf("\u25a1");
                }
                else
                {
                    printf("\u25a0");
                }
            }

            puts("");
        }

        if (playerX == 0 && playerY == 6)
        {
            puts("\nYou Win");
            break;
        }

        char keyboard = getch();

        if (keyboard == 'w')
        {
            if (map[playerX - 1][playerY] == 0)
            {
                playerX--;
            }
        }

        if (keyboard == 'a')
        {
            if (map[playerX][playerY - 1] == 0)
            {
                playerY--;
            }
        }

        if (keyboard == 's')
        {
            if (map[playerX + 1][playerY] == 0)
            {
                playerX++;
            }
        }

        if (keyboard == 'd')
        {
            if (map[playerX][playerY + 1] == 0)
            {
                playerY++;
            }
        }

        system("cls");
    }
}
