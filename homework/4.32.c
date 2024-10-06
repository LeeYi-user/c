#include <stdio.h>

int main(void)
{
    int num;

    printf("Please enter the number: ");
    scanf("%d", &num);
    puts("");

    for (int i = 0; i < (num - 1) / 2 + 1; i++)
    {
        for (int j = 0; j < (num - 1) / 2 - i; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < (i + 1) * 2 - 1 ; j++)
        {
            printf("*");
        }

        puts("");
    }

    for (int i = 0; i < (num - 1) / 2; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < (num - 2) - 2 * i; j++)
        {
            printf("*");
        }

        puts("");
    }

    return 0;
}
