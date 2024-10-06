#include <stdio.h>

int main()
{
    int num;
    unsigned long long fan = 1;

    printf("Please enter the number: ");
    scanf("%d", &num);

    for (int i = num; i > 0; i--)
    {
        fan *= i;
    }

    printf("\n%llu\n", fan);
}
