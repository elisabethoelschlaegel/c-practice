#include <stdio.h>
#include <math.h>

int main(void)
{
    float x1;
    printf("Input x1: ");
    scanf("%f", &x1);

    float y1;
    printf("Input y1: ");
    scanf("%f", &y1);

    float x2;
    printf("Input x2: ");
    scanf("%f", &x2);

    float y2;
    printf("Input y2: ");
    scanf("%f", &y2);

    float distance = pow(pow(x1 - x2, 2) + pow(y1 - y2, 2), 0.5);

    printf("Distance between the said points: %.4f\n", distance);

    return 0;

}