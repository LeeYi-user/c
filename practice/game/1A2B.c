#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int check(char array[])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (array[i] == array[j])
            {
                array[0] = '\0';
                return 0;
            }
        }
    }
}

int main(void)
{
    char answer[5] = {'\0'};
    while (strlen(answer) == 0)
    {
        srand(time(NULL));
        sprintf(answer, "%d", rand() % (9876 - 123 + 1) + 123);

        if (strlen(answer) == 3)
        {
            sprintf(answer, "0%d", atoi(answer));
        }

        check(answer);
    }

    int win = 0;
    while (win == 0)
    {
        char guess[100] = {'\0'};
        while (strlen(guess) == 0)
        {
            printf("Please enter the number: ");
            scanf("%s", guess);

            if (strlen(guess) == 4)
            {
                for (int i = 0; i < 4; i++)
                {
                    if (guess[i] < 48 || guess[i] > 57)
                    {
                        guess[0] = '\0';
                        break;
                    }
                    else if (i == 3)
                    {
                        check(guess);
                    }
                }
            }
            else
            {
                guess[0] = '\0';
            }
        }

        int a = 0, b = 0;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (i == j && answer[i] == guess[j])
                {
                    a++;
                }

                if (i != j && answer[i] == guess[j])
                {
                    b++;
                }
            }
        }

        printf("%dA%dB\n", a, b);

        if (a == 4)
        {
            win = 1;
        }
    }

    puts("\nYou Win");
    return 0;
}
