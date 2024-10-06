#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    double e = 1;
    unsigned long long fan = 1;

    printf("Please enter the number: ");
    scanf("%d", &x);

    for (int i = 1; i <= 21; i++)
    {
        for (int j = i; j > 0; j--)
        {
            fan *= j;
        }

        e += (double)pow(x, i)/(double)fan;
        fan = 1;
    }

    printf("\n%.15lf\n", e);
}
