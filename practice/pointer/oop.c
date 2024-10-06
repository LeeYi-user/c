#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float volume(float radius)
{
    return 4 * acos(-1) / 3 * pow(radius, 3);
}

typedef struct
{
    float radius;
    float (*volume)(float);
} Ball;

int main(void)
{
    Ball ball;

    scanf("%f", &ball.radius);
    ball.volume = volume;

    printf("%f\n", ball.volume(ball.radius));
}
