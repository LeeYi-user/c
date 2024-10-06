#include <stdio.h>

int main(void)
{
    for (int i = 2; i <= 100; i++)
    {
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                goto stop;
            }
        }

        printf("%d\n", i);

        stop:
            ;
    }

    return 0;
}
