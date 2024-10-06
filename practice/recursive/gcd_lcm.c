#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main(void)
{
    int a = 10, b = 34;

    printf("GCD: %d\nLCM: %d\n", gcd(a, b), lcm(a, b));
    return 0;
}
