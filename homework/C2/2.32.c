#include <stdio.h>
#include <math.h>

int main()
{
    float height, weight, bmi;

    printf("Please enter the height (cm): ");
    scanf("%f", &height);

    printf("Please enter the weight (kg): ");
    scanf("%f", &weight);

    bmi = weight / pow(height / 100, 2);
    printf("\nYour BMI is %.2f, ", bmi);

    if (bmi < 18.5)
    {
        printf("underweight\n");
    }
    else if (bmi < 25)
    {
        printf("normal\n");
    }
    else if (bmi < 30)
    {
        printf("overweight\n");
    }
    else
    {
        printf("obese\n");
    }
}
