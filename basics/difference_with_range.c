#include <stdio.h>

int main(void)
{
    int i1, i2;
    printf("Integer 1: ");
    scanf("%i", &i1);

    printf("Integer 2: ");
    scanf("%i", &i2);

    int reference;
    printf("Reference: ");
    scanf("%i", &reference);

    if (i1 == i2)
    {
        printf("%i", reference);
        return 0;
    }

    if (i1 > i2)
    {
        int temp = i1;
        i1 = i2;
        i2 = temp;
    }

    int array[i2 - i1 + 1];

    int min = 1000000;

    for (int i = 0; i < i2 - i1 + 1; i++)
    {
        array[i] = i1 + i;

        int difference = reference - array[i];

        if (difference < 0)
        {
            difference = -difference;
        }

        if (difference < min)
        {
            min = difference;
        }
    }

    printf("%i\n", min);
}