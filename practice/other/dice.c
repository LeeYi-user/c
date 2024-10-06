#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int num, dice[6];

    srand(time(NULL));

    for (int i = 0; i < 60000000; i++)
    {
        num = rand() % 6;
        dice[num]++;
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d\t%d\n", i + 1, dice[i]);
    }
}
