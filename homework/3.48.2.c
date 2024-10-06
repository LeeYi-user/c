#include <stdio.h>

int main()
{
    int num_int;
    char num_array[5];

    printf("Please enter the encrypted number: ");
    scanf("%d", &num_int);

    if (num_int < 1000)
    {
        sprintf(num_array, "0%d", num_int);
    }
    else
    {
        sprintf(num_array, "%d", num_int);
    }

    int temp;
    for (int i = 0; i < 2; i++)
    {
        temp = num_array[i];
        num_array[i] = num_array[i + 2];
        num_array[i + 2] = temp;
    }

    for (int i = 0; i < 4; i++)
    {
        num_array[i] = ((num_array[i] - '0') + 3) % 10;
    }

    num_int = 0;
    for (int i = 0; i < 4; i++)
    {
        num_int *= 10;
        num_int += num_array[i];
    }

    printf("\n%d\n", num_int);
}
