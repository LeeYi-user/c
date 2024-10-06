#include <stdio.h>

int main()
{
    float number1, number2, result;

    printf("Please enter the first number: ");
    scanf("%f", &number1);

    printf("Please enter the second number: ");
    scanf("%f", &number2);

    result = number1 + number2;
    printf("\n%f + %f = %f", number1, number2, result);

    result = number1 - number2;
    printf("\n%f - %f = %f", number1, number2, result);

    result = number1 * number2;
    printf("\n%f * %f = %f", number1, number2, result);

    result = number1 / number2;
    printf("\n%f / %f = %f", number1, number2, result);

    result = (int)number1 % (int)number2;
    printf("\n%d %% %d = %d\n", (int)number1, (int)number2, (int)result);
}
