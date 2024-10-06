#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            printf("%s", "* ");
        }

        puts("");

        if (i % 2 == 0)
        {
            printf("%s", " ");
        }
    }

    return 0;
}
