#include <stdio.h>
#include <stdlib.h>

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

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] % 2 == 1)
        {
            sum = sum + numbers[i];
        }
    }

    printf("Sum of all odd values: %i\n", sum);
    
    return 0;
}