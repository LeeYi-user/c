#include <stdio.h>
#include <string.h>

typedef struct
{
    int age;
    char job[10];
} human;

int main(void)
{
    human lee = {18, "student"};
    human* pointer = &lee;

    pointer -> age = 30;
    strcpy(pointer -> job, "teacher");

    printf("Lee is an %d years old %s.\n", (*pointer).age, (*pointer).job);
}
