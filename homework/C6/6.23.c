#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int floor[50][50] = {0}, X = 49, Y = 0, pen, angle = 0;
    char command[10] = {'\0'}, count[10] = {'\0'};

    while (command[0] != 57)
    {
        scanf("%s", command);

        if (command[0] == 49)
        {
            pen = 0;
        }

        if (command[0] == 50)
        {
            pen = 1;
        }

        if (command[0] == 51)
        {
            angle++;

            if (angle > 3)
            {
                angle = 0;
            }
        }

        if (command[0] == 52)
        {
            angle--;

            if (angle < 0)
            {
                angle = 3;
            }
        }

        if (command[0] == 53)
        {
            for (int i = 2; i < strlen(command); i++)
            {
                count[i - 2] = command[i];
            }

            for (int i = 0; i < atoi(count); i++)
            {
                if (angle == 0)
                {
                    X--;
                }
                else if (angle == 1)
                {
                    Y++;
                }
                else if (angle == 2)
                {
                    X++;
                }
                else
                {
                    Y--;
                }

                if (pen == 1)
                {
                    floor[X][Y] = 1;
                }
            }
        }

        if (command[0] == 54)
        {
            for (int i = 0; i < 50; i++)
            {
                for (int j = 0; j < 50; j++)
                {
                    if (i == X && j == Y)
                    {
                        if (angle == 0)
                        {
                            printf("¡ô");
                        }
                        else if (angle == 1)
                        {
                            printf("¡÷");
                        }
                        else if (angle == 2)
                        {
                            printf("¡õ");
                        }
                        else
                        {
                            printf("¡ö");
                        }
                    }
                    else if (floor[i][j] == 0)
                    {
                        printf("¡¼");
                    }
                    else
                    {
                        printf("¡½");
                    }
                }

                puts("");
            }
        }
    }
}
