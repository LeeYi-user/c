#include <stdio.h>

int main()
{
    float side1, side2, side3;

    printf("Please enter three numbers: ");
    scanf("%f%f%f", &side1, &side2, &side3);

    if ((side1 == side2) && (side1 == side3))
    {
        printf("\nThis is a regular triangle\n");
    }
    else
    {
        printf("\nThis is not a regular triangle\n");
    }
}
