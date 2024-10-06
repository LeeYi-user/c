#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fp = fopen("test.txt", "w");

    fprintf(fp, "Hello World\nHello C\n");

    fclose(fp);
}
