#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[255];
    FILE* fp = fopen("test.txt", "r");

    fgets(line, 255, fp);
    printf("%s", line);

    fgets(line, 255, fp);
    printf("%s", line);

    fclose(fp);
}
