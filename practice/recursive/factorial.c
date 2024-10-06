#include <stdio.h>

int factorial(int num)
{
    if (num == 1)
    {
        return 1;
    }

    return num * factorial(num - 1);
}

int main(void)
{
    int num = 10;

    printf("%d! = %d\n", num, factorial(num));
    return 0;
}
