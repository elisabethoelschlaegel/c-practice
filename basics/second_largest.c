#include <stdio.h>

int main(void)
{
    int numbers[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Integer %i: ", i + 1);
        scanf("%i", &numbers[i]);
        
        if (numbers[i] < 1 || numbers[i] > 100)
        {
            printf("Range: 1 <= x <= 100\n");
            return 1;
        }
    }

    int largest = numbers[0];

    for (int i = 0; i < 3; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        if (numbers[i] == largest)
        {
            numbers[i] = 0;
            largest = 0;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }

    printf("%i\n", largest);
    return 0;
}