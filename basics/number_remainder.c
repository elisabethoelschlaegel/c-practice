#include <stdio.h>
#include <stdlib.h>

int main(void)
{    
    int divider;

    printf("Input an integer: ");
    scanf("%i", &divider);

    int numbers[100];

    for (int i = 0; i < 100; i++)
    {
        numbers[i] = i + 1;

        if ((numbers[i]) % divider == 3)
            {
                printf("%i\n", numbers[i]);
            }
    }

    return 0;
}