#include <stdio.h>
#include <string.h>

int main(void)
{
    char num[10];
    int answer = 1;

    printf("Please enter the number: ");
    scanf("%s", num);

    for (int i = 0; i < strlen(num); i++)
    {
        answer *= num[i] - '0';
    }

    printf("%d\t%d\n", strlen(num), answer);
}
