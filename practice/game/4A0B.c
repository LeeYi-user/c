#include <stdio.h>
#include <string.h>

void printf_0(char array[], int num)
{
    if (num < 1000)
    {
        printf("%s 0%d\n", array, num);
    }
    else
    {
        printf("%s %d\n", array, num);
    }
}

void sprintf_0(char array[], int num)
{
    if (num < 1000)
    {
        sprintf(array, "0%d", num);
    }
    else
    {
        sprintf(array, "%d", num);
    }
}

int check(char array[])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (array[i] == array[j])
            {
                return 0;
            }
        }
    }

    return 1;
}

int main(void)
{
    char answer[5];
    int answers[5040], length = 0;
    for (int i = 123; i <= 9876; i++)
    {
        sprintf_0(answer, i);

        if (check(answer) == 1)
        {
            answers[length] = i;
            length++;
        }
    }

    while (1)
    {
        char result_num[100], result_ab[100];
        loop: while (1)
        {
            printf("Please enter the result: ");
            scanf("%99s%99s", result_num, result_ab);

            if (strlen(result_num) == 4)
            {
                for (int i = 0; i < 4; i++)
                {
                    if (result_num[i] < 48 || result_num[i] > 57)
                    {
                        goto loop;
                    }
                }

                if (check(result_num) == 0)
                {
                    continue;
                }

                if (strlen(result_ab) == 4 && result_ab[0] >= 48 && result_ab[0] <= 52 && (result_ab[1] == 65 || result_ab[1] == 97) && result_ab[2] >= 48 && result_ab[2] <= 52 && (result_ab[3] == 66 || result_ab[3] == 98) && result_ab[0] + result_ab[2] <= 100 && !(result_ab[0] == 51 && result_ab[2] != 48))
                {
                    break;
                }
            }
        }

        for (int i = 0; i < length; i++)
        {
            sprintf_0(answer, answers[i]);

            int a = 0, b = 0;
            for (int j = 0; j < 4; j++)
            {
                for (int k = 0; k < 4; k++)
                {
                    if (result_num[j] == answer[k])
                    {
                        if (j == k)
                        {
                            a++;
                        }
                        else
                        {
                            b++;
                        }

                        break;
                    }
                }
            }

            if (!(a == result_ab[0] - '0' && b == result_ab[2] - '0'))
            {
                for (int j = i; j < length - 1; j++)
                {
                    answers[j] = answers[j + 1];
                }

                i--;
                length--;
            }
        }

        puts("");

        if (length <= 1)
        {
            if (length == 0)
            {
                puts("Can't find the answer");
            }
            else
            {
                printf_0("The answer is", answers[0]);
            }

            break;
        }

        for (int i = 0; i < length; i++)
        {
            printf_0("Possible answer:", answers[i]);
        }

        puts("");
    }
}
