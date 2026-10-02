#include <stdio.h>

int main(void)
{
    unsigned int length;
    printf("Length of the sequence: ");
    scanf("%i", &length);

    int sequence[length];
    printf("Sequence of positive numbers: ");
    for (int i = 0; i < length; i++)
    {
        scanf("%i", &sequence[i]);
    }

    int current = 1;
    int max = 1;
    int max_index = 0;

    for (int i = 1; i < length; i++)
    {
        if (sequence[i] > sequence[i - 1])
        {
            current++;
        }
        else 
        {
            current = 1;
        }

        if (current > max)
        {
            max = current;
            max_index = i - current + 1;
        }
    }

    printf("Length of the subsequence: %i\n", max);

    for (int i = max_index; i < max_index + max; i++)
    {
        printf("%i ", sequence[i]);
    }
    printf("\n");

    return 0;
}