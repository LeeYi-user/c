#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    char array[6];

    printf("Please enter the number that is less than or equal to five digits: ");
    scanf("%d", &num);
    sprintf(array, "%d", num);

    int count = 0;
    for (int i = 0; i < strlen(array); i++)
    {
        if ((array[i] - '0') == 9)
        {
            count++;
        }
    }

    printf("\nThere are %d nines\n", count);
}
