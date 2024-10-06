#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char string[100];

    scanf("%s", string);

    puts("");

    for (int i = strlen(string) - 1; i >= 0; i--)
    {
        printf("%c", string[i]);
    }

    puts("");

    for (int i = 0; i < strlen(string); i++)
    {
        if (islower(string[i]))
        {
            printf("%c", toupper(string[i]));
        }
        else
        {
            printf("%c", tolower(string[i]));
        }
    }

    puts("");
}
