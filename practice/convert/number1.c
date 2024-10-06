#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, base;
    char array[20];

    printf("Please enter the number: ");
    scanf("%d", &num);

    printf("Please enter the base: ");
    scanf("%d", &base);

    itoa(num, array, base);
    printf("%d in base %d is %s\n", num, base, array);

    return 0;
}
