#include <stdio.h>

int main(void)
{
    int numbers[5];

    printf("Input the first number: ");
    scanf("%i", &numbers[0]);

    printf("Input the second number: ");
    scanf("%i", &numbers[1]);

    printf("Input the third number: ");
    scanf("%i", &numbers[2]);

    printf("Input the fourth number: ");
    scanf("%i", &numbers[3]);

    printf("Input the fifth number: ");
    scanf("%i", &numbers[4]);

    int positive = 0;
    int negative = 0;

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] < 0)
        {
            negative++;
        }
        if (numbers[i] > 0)
        {
            positive++;
        }
    }

    printf("Number of positive numbers: %i\n", positive);
    printf("Number of negative numbers: %i\n", negative);

    return 0;
}