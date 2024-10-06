#include <stdio.h>

int swap(int *pNum1, int *pNum2)
{
    int temp = *pNum1;
    *pNum1 = *pNum2;
    *pNum2 = temp;
}

int bubble(int *pArray)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (pArray[j] > pArray[j + 1])
            {
                swap(&pArray[j], &pArray[j + 1]);
            }
        }
    }
}

int main(void)
{
    int array[] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

    puts("Before:");

    for (int i = 0; i < 10; i++)
    {
        printf("   %d", array[i]);
    }

    bubble(array);

    puts("\n\nAfter:");

    for (int i = 0; i < 10; i++)
    {
        printf("   %d", array[i]);
    }

    puts("");
}
