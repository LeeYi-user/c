#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char string[100];

    gets(string);

    for (int i = strlen(string) - 1; i >= 0; i--)
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
