#include <stdio.h>

int main(void)
{
    int low, high;

    scanf("%d%d", &low, &high);

    if (low < 2)
    {
        low = 2;
    }

    puts("");

    for (int i = low; i <= high; i++)
    {
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                goto skip;
            }
        }

        printf("%d\n", i);

        skip:
            ;
    }
}
