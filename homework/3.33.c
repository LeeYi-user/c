#include <stdio.h>

int main(void)
{
    int side;

    printf("Please enter the number: ");
    scanf("%d", &side);
    puts("");

    for (int i = 0; i < side; i++)
    {
        printf("*");

        for (int j = 0; j < side - 2; j++)
        {
            if (i == 0 || i == side - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        if (side > 1)
        {
            printf("*");
        }

        puts("");
    }

    return 0;
}
