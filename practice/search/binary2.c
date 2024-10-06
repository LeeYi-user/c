#include <stdio.h>

int binary(int array[], int target, int low, int high)
{
    int index = (low + high) / 2;

    if (array[index] == target)
    {
        return index;
    }
    else if (low >= high)
    {
        return -1;
    }
    else
    {
        if (array[index] > target)
        {
            high = index - 1;
        }
        else
        {
            low = index + 1;
        }

        binary(array, target, low, high);
    }
}

int main(void)
{
    int array[] = {2, 4, 6, 8, 10, 12, 37, 45, 68, 89}, target;

    for (int j = 0; j < 10; j++)
    {
        printf("%d   ", array[j]);
    }

    printf("\n\nPlease enter the number: ");
    scanf("%d", &target);

    printf("\n[%d]\n", binary(array, target, 0, 9));
}
