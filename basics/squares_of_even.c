#include <stdio.h>
#include <math.h>

int main(void)
{
    int range;

    printf("Specify value: ");
    scanf("%i", &range);

    int numbers[range];

    for (int i = 0; i < range; i++)
    {
        numbers[i] = i + 1;

        if (numbers[i] % 2 == 0)
        {
            int even = numbers[i];
            int power = pow(numbers[i], 2);

            printf("%i^2 = %i\n", even, power);
        }
    }

    return 0;
}