#include <stdio.h>
#include <math.h>

int main()
{
    int num = 100, sum = 0;
    char array[4];
    while (num < 1000)
    {
        sprintf(array, "%d", num);

        for (int i = 0; i < 3; i++)
        {
            sum += (int)pow(array[i] - '0', 3);
        }

        if (num == sum)
        {
            printf("%d\n", num);
        }

        num++;
        sum = 0;
    }
}
