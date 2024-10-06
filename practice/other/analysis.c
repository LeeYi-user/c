#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void display(int array[])
{
    for (int i = 0; i < 99; i++)
    {
        printf("%d ", array[i]);

        if ((i + 1) % 9 == 0)
        {
            puts("");
        }
    }
}

int main(void)
{
    int num, array[99];

    srand(time(NULL));

    puts("Before:\n");

    for (int i = 0; i < 99; i++)
    {
        num = rand() % 9 + 1;
        array[i] = num;
    }

    display(array);

    puts("\nAfter:\n");

    for (int i = 0; i < 98; i++)
    {
        for (int j = 0; j < 98; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    display(array);

    puts("\nMean:\n");

    int sum = 0;
    for (int i = 0; i < 99; i++)
    {
        sum += array[i];
    }

    printf("%f\n", (float)sum / 99);

    puts("\nMedian:\n");

    printf("%d\n", array[99 / 2]);

    puts("\nMode:\n");

    int modes[9] = {0};
    for (int i = 0; i < 99; i++)
    {
        modes[array[i] - 1]++;
    }

    for (int i = 0; i < 9; i++)
    {
        printf("%d\t", i + 1);

        for (int j = 0; j < modes[i]; j++)
        {
            printf("*");
        }

        puts("");
    }
}
