#include <stdio.h>
#include <stdbool.h>

int swap(int *pNum1, int *pNum2)
{
    int temp = *pNum1;
    *pNum1 = *pNum2;
    *pNum2 = temp;
}

bool method2(int num1, int num2)
{
    return num2 > num1;
}

bool method1(int num1, int num2)
{
    return num1 > num2;
}

int bubble(int *pArray, bool (*check)(int num1, int num2))
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if ((*check)(pArray[j], pArray[j + 1]))
            {
                swap(&pArray[j], &pArray[j + 1]);
            }
        }
    }
}

int main(void)
{
    int method, array[] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

    printf("Please choose a sorting method (1/2): ");
    scanf("%d", &method);

    puts("\nBefore:");

    for (int i = 0; i < 10; i++)
    {
        printf("   %d", array[i]);
    }

    puts("");

    if (method == 1)
    {
        bubble(array, method1);
    }
    else if (method == 2)
    {
        bubble(array, method2);
    }
    else
    {
        exit(0);
    }

    puts("\nAfter:");

    for (int i = 0; i < 10; i++)
    {
        printf("   %d", array[i]);
    }

    puts("");
}
