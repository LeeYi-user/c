#include <stdio.h>

int add2(int a, int b)
{
    return a + b;
}

int add1(int a, int b, int (*add3)(int, int))
{
    return add3(a, b);
}

int main(void)
{
    int a, b;

    scanf("%d%d", &a, &b);
    printf("%d\n", add1(a, b, add2));
}
