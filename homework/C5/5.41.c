#include <stdio.h>

int isPrime(int a, int b)
{
    if (b == 1)
    {
        return 1;
    }

    if (a % b == 0)
    {
        return 0;
    }

    return isPrime(a, b - 1);
}

int main(void)
{
    int num;

    scanf("%d", &num);

    if (isPrime(num, num / 2) == 1)
    {
        printf("%d is prime.\n", num);
    }
    else
    {
        printf("%d is not prime.\n", num);
    }
}
