#include <stdio.h>

int main(void)
{
    int side;

    printf("Please enter the number: ");
    scanf("%d", &side);
    puts("");

    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++)
        {
            printf("*");
        }

        puts("");
    }

    return 0;
}
