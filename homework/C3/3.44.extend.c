#include <stdio.h>

int main(void)
{
    int sides[3], isosrt = 0;

    printf("Extend\n\nPlease enter three numbers: ");
    scanf("%d%d%d", &sides[0], &sides[1], &sides[2]);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (sides[j] < sides[j + 1])
            {
                int temp = sides[j];
                sides[j] = sides[j + 1];
                sides[j + 1] = temp;
            }
        }
    }

    if (sides[0] < sides[1] + sides[2])
    {
        printf("\nThis is a triangle");

        if ((sides[0] == sides[1]) || (sides[0] == sides[2]) || (sides[1] == sides[2]))
        {
            printf("\nThis is a isosceles triangle");
            isosrt++;
        }

        if ((sides[0] == sides[1]) && (sides[0] == sides[2]))
        {
            printf("\nThis is a regular triangle");
        }

        if (sides[0]*sides[0] == sides[1]*sides[1] + sides[2]*sides[2])
        {
            printf("\nThis is a rectangular triangle");
            isosrt++;
        }

        if (sides[0]*sides[0] > sides[1]*sides[1] + sides[2]*sides[2])
        {
            printf("\nThis is a obtuse triangle");
        }

        if (sides[0]*sides[0] < sides[1]*sides[1] + sides[2]*sides[2])
        {
            printf("\nThis is a acute triangle");
        }

        if (isosrt == 2)
        {
            printf("\nThis is a isosceles righttriangle");
        }

        printf("\n");
    }
    else
    {
        printf("\nThis is not a triangle\n");
    }

    return 0;
}
