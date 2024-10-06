#include <stdio.h>

void hanoi(int n, char one, char three, char two)
{
    if (n == 1)
    {
        printf("%c -> %c\n", one, three);
    }
    else
    {
        hanoi(n - 1, one, two, three);
        hanoi(1, one, three, two);
        hanoi(n - 1, two, three, one);
    }
}

int main(void)
{
    int num;

    scanf("%d", &num);
    hanoi(num, '1', '3', '2');
}
