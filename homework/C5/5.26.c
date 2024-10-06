#include <stdio.h>

void isPerfect(int num)
{
    int sum = 0;
    for (int i = num/2; i > 0; i--)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    if (num == sum)
    {
        printf("%d\n", num);
    }
}

int main(void)
{
    for (int i = 1; i <= 1000; i++)
    {
        isPerfect(i);
    }
}
