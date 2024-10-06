#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int nums[20], length = 20;

    srand(time(NULL));

    for (int i = 0; i < 20; i++)
    {
        nums[i] = rand() % 20 + 1;
    }

    puts("Before:");

    for (int i = 0; i < length; i++)
    {
        printf("%d   ", nums[i]);
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

    puts("\n\nAfter:");

    for (int i = 0; i < length; i++)
    {
        printf("%d   ", nums[i]);
    }

    puts("");
}
