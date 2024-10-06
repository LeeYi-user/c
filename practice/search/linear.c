#include <stdio.h>

int linear(int array[], int target, int length)
{
    for (int index = 0; index < length; index++)
    {
        if (array[index] == target)
        {
            return index;
        }
    }

    return -1;
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

    printf("\n[%d]\n", linear(array, target, sizeof(array) / sizeof(int)));
}
