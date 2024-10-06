#include <stdio.h>

int main()
{
    int number1, number2, number3;
    int sum, product;
    float average;

    printf("Please enter three different integers: ");
    scanf("%d%d%d", &number1, &number2, &number3);

    sum = number1 + number2 + number3;
    printf("\nThe sum is %d", sum);

    average = (float)sum / 3;
    printf("\nThe average is %f", average);

    product = number1 * number2 * number3;
    printf("\nThe product is %d", product);

    if (number1 <= number2 && number1 <= number3)
    {
        printf("\nThe smallest is %d", number1);
    }
    else if (number2 <= number1 && number2 <= number3)
    {
        printf("\nThe smallest is %d", number2);
    }
    else
    {
        printf("\nThe smallest is %d", number3);
    }

    if (number1 >= number2 && number1 >= number3)
    {
        printf("\nThe largest is %d\n", number1);
    }
    else if (number2 >= number1 && number2 >= number3)
    {
        printf("\nThe largest is %d\n", number2);
    }
    else
    {
        printf("\nThe largest is %d\n", number3);
    }
}
