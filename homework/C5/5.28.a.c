#include <stdio.h>
#include <string.h>

int main(void)
{
    int sum = 0;
    char num[10];

    scanf("%s", num);
    for (int i = 0; i < strlen(num); i++)
    {
        sum += num[i] - '0';
    }

    printf("%d\n", sum);
}
