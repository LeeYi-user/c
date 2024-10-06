#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int num;
    char output[10];

    printf("Please enter the number: ");
    scanf("%d", &num);

    itoa(num, output, 2);

    for (int i = 0; i < 8 - strlen(output); i++)
    {
        printf("0");
    }

    puts(output);
}
