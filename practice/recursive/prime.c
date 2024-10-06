#include <stdio.h>

int check(int a, int b)
{
    if (b == 1)
    {
        return 1;
    }
    else if (a % b == 0)
    {
        return 0;
    }
    else
    {
        return check(a, b - 1);
    }
}

int main(void)
{
    int num = 17;

    if (check(num, num / 2) == 1)
    {
        printf("%d is a prime.\n", num);
    }
    else
    {
        printf("%d is not a prime.\n", num);
    }

    return 0;
}
