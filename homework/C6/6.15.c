#include <stdio.h>

int main(void)
{
    int nums1[10], nums2[10], ios[10], length = 0;

    puts("Array 1:");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &nums1[i]);
    }

    puts("Array 2:");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &nums2[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (nums1[i] == nums2[j])
            {
                for (int k = 0; k < length; k++)
                {
                    if (nums1[i] == ios[k])
                    {
                        goto skip;
                    }
                }

                ios[length] = nums1[i];
                length++;
                break;
            }
        }

        skip:
            ;
    }

    puts("Intersection of Set:");

    for (int i = 0; i < length; i++)
    {
        printf("%d   ", ios[i]);
    }

    puts("");
}
