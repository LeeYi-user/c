#include <stdio.h>
#include <math.h>

int main()
{
    int number, result;

    printf("Please enter the five-digit number: ");
    scanf("%d", &number);

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        result = (number / (int)pow(10, 4 - i)) - ((number / (int)pow(10, 5 - i)) * 10);
        printf("%d   ", result);
    }

    printf("\n");
}
