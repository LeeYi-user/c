#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add_0(char num[], int length)
{
    while (strlen(num) < length)
    {
        for (int i = strlen(num) - 1; i >= 0; i--)
        {
            num[i + 1] = num[i];
        }

        num[0] = '0';
    }
}

int main(void)
{
    int length, count;
    char a[100], b[100], c[100];

    scanf("%s%s", a, b);
    itoa(atoi(a) + atoi(b), c, 10);
    length = strlen(c);

    add_0(a, length);
    add_0(b, length);

    for (int i = length - 1; i > 0; i--)
    {
        if (a[i] - '0' + b[i] - '0' >= 10)
        {
            a[i - 1]++;
            count++;
        }
    }

    if (a[0] - '0' + b[0] - '0' >= 10)
    {
        count++;
    }

    printf("%d\n", count);
}
