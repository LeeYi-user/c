#include <stdio.h>

int main(void)
{
    int nums[20], length = 20;

    puts("Array 1:");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &nums[i]);
    }

    puts("Array 2:");

    for (int i = 10; i < 20; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (nums[i] == nums[j])
            {
                for (int k = i; k < length - 1; k++)
                {
                    nums[k] = nums[k + 1];
                }

                i--;
                length--;
                break;
            }
        }
    }

    puts("Union of Set:");

    for (int i = 0; i < length; i++)
    {
        printf("%d   ", nums[i]);
    }

    puts("");
}
