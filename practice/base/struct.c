#include <stdio.h>
#include <string.h>

typedef struct
{
    int age;
    char job[10];
} human;

int main(void)
{
    human lee;

    lee.age = 18;
    strcpy(lee.job, "student");

    printf("Lee is an %d years old %s.\n", lee.age, lee.job);
}
