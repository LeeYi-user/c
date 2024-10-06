#include <stdio.h>

int main()
{
    int num;

    printf("Please enter the score (0~100): ");
    scanf("%d", &num);
    num /= 10;

    switch (num)
    {
        case 10:
            printf("\nYou cheated\n");
            break;
        case 9:
            printf("\nYour level is A\n");
            break;
        case 8:
            printf("\nYour level is B\n");
            break;
        case 7:
            printf("\nYour level is C\n");
            break;
        case 6:
            printf("\nYour level is D\n");
            break;
        default:
            printf("\nYour level is F\n");
    }
}
