#include <stdio.h>

int main(void)
{
    int num;
    char array[] = "123";

    sscanf(array, "%d", &num);  //  convert array to number
    printf("%d\n", num);

    sprintf(array, "%d", num); //  convert number to array
    printf("%s\n", array);

    return 0;
}
