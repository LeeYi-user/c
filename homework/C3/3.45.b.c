#include <stdio.h>

int main()
{
    double e = 1;
    unsigned long long fan = 1;

    for (int i = 1; i <= 21; i++)
    {
        for (int j = i; j > 0; j--)
        {
            fan *= j;
        }

        e += 1/(double)fan;
        fan = 1;
    }

    printf("\n%.15lf\n", e);
}
