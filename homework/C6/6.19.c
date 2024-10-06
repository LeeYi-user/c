#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int dice[11] = {0};

    srand(time(NULL));

    for (int i = 0; i < 36000; i++)
    {
        dice[rand() % 6 + rand() % 6]++;
    }

    for (int i = 0; i < 11; i++)
    {
        printf("%d:\t%d\n", i + 2, dice[i]);
    }
}
