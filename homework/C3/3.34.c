#include <stdio.h>

int main()
{
    int num = 0;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            num++;
            printf("%d\t", num);
        }

        printf("\n");
    }
}
