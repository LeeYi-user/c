#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int pc[] = {2, 0, 5}, random;
    int user;

    printf("Please enter the number (2/0/5): ");
    scanf("%d", &user);

    srand(time(NULL));
    random = rand() % 3;

    if (pc[random] == 2)
    {
        printf("\nI use scissors, ");
    }
    else if (pc[random] == 0)
    {
        printf("\nI use rock, ");
    }
    else
    {
        printf("\nI use paper, ");
    }

    if (user == 2)
    {
        printf("you use scissors, ");
    }
    else if (user == 0)
    {
        printf("you use rock, ");
    }
    else
    {
        printf("you use paper, ");
    }

    if (pc[random] == user)
    {
        puts("tie.");
    }
    else if ((pc[random] == 2 && user == 0) || (pc[random] == 0 && user == 5) || (pc[random] == 5 && user == 2))
    {
        puts("you win.");
    }
    else
    {
        puts("you lose.");
    }

    return 0;
}
