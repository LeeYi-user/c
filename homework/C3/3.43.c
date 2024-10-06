#include <stdio.h>

int main()
{
    float side1, side2, side3;

    printf("Sides of a Triangle\n\nPlease enter three numbers: ");
    scanf("%f%f%f", &side1, &side2, &side3);

    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1))
    {
        printf("\nThis is a triangle\n");
    }
    else
    {
        printf("\nThis is not a triangle\n");
    }
}
