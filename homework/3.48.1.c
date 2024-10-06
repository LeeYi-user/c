#include <stdio.h>

int main()
{
    int num_int;
    char num_array[5];

    printf("Please enter the four-digit number: ");
    scanf("%d", &num_int);
    sprintf(num_array, "%d", num_int);

    for (int i = 0; i < 4; i++)
    {
        num_array[i] = ((num_array[i] - '0') + 7) % 10;
    }

    int temp;
    for (int i = 0; i < 2; i++)
    {
        temp = num_array[i];
        num_array[i] = num_array[i + 2];
        num_array[i + 2] = temp;
    }

    num_int = 0;
    for (int i = 0; i < 4; i++)
    {
        num_int *= 10;
        num_int += num_array[i];
    }

    if (num_int < 1000)
    {
        printf("\n0%d\n", num_int);
    }
    else
    {
        printf("\n%d\n", num_int);
    }
}
