#include <stdio.h>

int main(void)
{
    int decimal, digit, binary = 1, count = -1;

    printf("Please enter the number: ");
    scanf("%d", &decimal);

    while (decimal > 0)
    {
        digit = decimal % 2;
        binary = binary * 10 + digit;
        decimal /= 2;
        count++;
    }

    for (int i = 0; i < 7 - count; i++)
    {
        printf("0");
    }

    while (binary > 1)
    {
        int output = binary % 10;

        printf("%d", output);
        binary = binary / 10;
    }

    puts("");
    return 0;
}
