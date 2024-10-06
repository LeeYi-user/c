#include <stdio.h>

int main()
{
    float humans = 7.6; //  There are 7.6 billion humans in the world

    for (int year = 2022; year <= 2026; year++) //  I want to estimate the population from 2022 to 2026
    {
        humans *= 1.01; //  The population growth rate is 1%
        printf("\n%d\t%.2f Billion\n", year, humans);
    }
}
