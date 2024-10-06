#include <stdio.h>
#include <string.h>

int main(void)
{
    char num1[100], num2[100];

    scanf("%s", num1);
    for (int i = strlen(num1) - 1; i >= 0; i--)
    {
        num2[strlen(num1) - 1 - i] = num1[i];
    }

    puts(num2);
}
