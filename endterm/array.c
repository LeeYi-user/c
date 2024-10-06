#include <stdio.h>

int main(void)
{
    int length;

    scanf("%d", &length);

    puts("");

    int array[length];

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }

    puts("");

    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d   ", array[i]);
    }

    puts("");
}
