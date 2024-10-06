#include <stdio.h>

int main(void)
{
    puts("(A)");

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }

        puts("");
    }

    puts("\n(B)");

    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            printf("*");
        }

        puts("");
    }

    puts("\n(C)");

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j >= i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        puts("");
    }

    puts("\n(D)");

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j >= 9 - i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        puts("");
    }

    return 0;
}
