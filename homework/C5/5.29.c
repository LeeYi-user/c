#include <stdio.h>

int lcm(int x, int y)
{
    int i = x;

    if (y > i)
    {
        i = y;
    }

    for (i; ; i++)
    {
        if ((i % x == 0) && (i % y == 0))
        {
            return i;
        }
    }
}

int main(void)
{
    int x, y;

    scanf("%d%d", &x, &y);
    printf("%d\n", lcm(x, y));
}
