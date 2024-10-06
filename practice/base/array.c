#include <stdio.h>

int main(void)
{
    int array[3][2] = {9, 4, {8, 7}};

    printf("%d\n", array[1][0]);    //  8
    printf("%d\n", array[2][0]);    //  0
    printf("%d\n", array[3][0]);    //  ?

    return 0;
}
