#include <stdio.h>

int main(void)
{
    int height, width;
    char symbol[10];

    printf("Please enter the height, width, symbol: ");
    scanf("%d%d%s", &height, &width, symbol);

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf("%c", symbol[0]);
        }

        puts("");
    }

    return 0;
}
