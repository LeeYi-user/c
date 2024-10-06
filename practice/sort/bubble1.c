#include <stdio.h>

int main(void)
{
    int array[] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

    puts("Before:");

    for (int i = 0; i < 10; i++)
    {
        printf("   %d", array[i]);
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    puts("\n\nAfter:");

    for (int i = 0; i < 10; i++)
    {
        printf("   %d", array[i]);
    }

    puts("");
}
