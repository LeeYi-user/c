#include <stdio.h>

int main()
{
    int duration, second, minute, hour;

    printf("Please enter the duration (s): ");
    scanf("%d", &duration);

    second = duration % 60;
    minute = ((duration - second) / 60) % 60;
    hour = (((duration - second) / 60) - minute) / 60;

    printf("\n%d : %d : %d\n", hour, minute, second);
}
