#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    int max, min;
    float age;

    printf("Please enter three numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3)
    {
        max = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        max = num2;
    }
    else
    {
        max = num3;
    }

    if (num1 <= num2 && num1 <= num3)
    {
        min = num1;
    }
    else if (num2 <= num1 && num2 <= num3)
    {
        min = num2;
    }
    else
    {
        min = num3;
    }

    age = (float)(num1 + num2 + num3) / 3;

    printf("%d\t%d\t%.2f\n", max, min, age);
    return 0;
}
