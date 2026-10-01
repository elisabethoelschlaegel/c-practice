#include <stdio.h>

int main(void)
{
    int numbers[50];

    for (int i = 1; i < 51; i++)
    {
        numbers[i - 1] = i;
    }

    for (int j = 0; j < 50; j++)
    {
        if (numbers[j] % 2 == 0)
        {
            printf("%i ", numbers[j]);
        }
    }
    printf("\n");

    return 0;
}