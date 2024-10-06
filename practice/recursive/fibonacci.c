#include <stdio.h>

int fibonacci(int num)
{
    if (num == 0 || num == 1)
    {
        return num;
    }

    return fibonacci(num - 1) + fibonacci(num - 2);
}

int main(void)
{
    int num = 20;

    printf("Fibonacci(%d) = %d\n", num, fibonacci(num));
    return 0;
}
