#include <stdio.h>

int main(void)
{
    float weight1;
    printf("Weight -Item1: ");
    scanf("%f", &weight1);

    float number1;
    printf("No. of item1: ");
    scanf("%f", &number1);
    
    float weight2;
    printf("Weight -Item2: ");
    scanf("%f", &weight2);

    float number2;
    printf("No. of item2: ");
    scanf("%f", &number2);

    float average = (weight1 * number1 + weight2 * number2) / (number1 + number2);

    printf("Average value: %f\n", average);

    return 0;
}