#include <stdio.h>
#include <math.h>

int main(void)
{
    float pi = 4;
    int counter = 2;
    for (int i = 1; i < 160000; i++)
    {
        if (i % 2 == 0)
        {
            pi += (float)4 / (2 * i + 1);
        }
        else
        {
            pi -= (float)4 / (2 * i + 1);
        }

        for (int j = counter; j <= 5; j++)
        {
            if ((int)(pi * pow(10, j)) == (int)(3.14159 * pow(10, j)))
            {
                printf("%d:\t%g\n", i + 1, (float)(int)(pi * pow(10, j)) / pow(10, j));
                counter++;
            }
        }
    }

    return 0;
}
