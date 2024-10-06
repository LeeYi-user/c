#include <stdio.h>

int main(void)
{
    int num;
    float pi = 4;

    printf("Please enter the number: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++)
    {
        if (i % 2 == 0)
        {
            pi += (float)4 / (2 * i + 1);
        }
        else
        {
            pi -= (float)4 / (2 * i + 1);
        }
    }

    printf("%f\n", pi);
    return 0;
}
