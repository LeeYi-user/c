#include <stdio.h>

int main(void)
{
    int nums[5];

    printf("Please enter five numbers: ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &nums[i]);
    }

    puts("");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < nums[i]; j++)
        {
            printf("*");
        }

        puts("");
    }

    return 0;
}
