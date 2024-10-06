#include <stdio.h>

int main(void)
{
    int a, b, c;
    int check = 0;

    printf("Please enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (c == a + b)
    {
        printf("+");
        check = 1;
    }

    if (c == a - b)
    {
        printf("-");
        check = 1;
    }

    if (c == a * b)
    {
        printf("*");
        check = 1;
    }

    if (c == a % b)
    {
        printf("%");
        check = 1;
    }

    if (check == 0)
    {
        printf("?");
    }

    puts("");
    return 0;
}
