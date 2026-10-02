#include <stdio.h>

int main(void)
{
    int values;
    printf("How many values? ");
    scanf("%i", &values);

    int sequence[values];
    printf("Which values? ");
    for (int i = 0; i < values; i++)
    {
        scanf("%i", &sequence[i]);
    }

    int max = sequence[0];
    int max_index;

    for (int i = 0; i < values; i++)
    {
        if (sequence[i] > max)
        {
            max = sequence[i];
            max_index = i;
        }
    }

    int sum_before = 0;
    
    if (max == sequence[0])
    {
        printf("The sum before the maximum is 0.\n");
    }
    else
    {
        for (int i = 0; i < max_index; i++)
        {
            sum_before = sum_before + sequence[i];
        }
        printf("The sum before the maximum is %i\n", sum_before);
    }

    int sum_after = 0;

    if (max == sequence[values - 1])
    {
        printf("The sum after the maximum is 0.\n");
    }
    else
    {
        for (int i = max_index + 1; i < values; i++)
        {
            sum_after = sum_after + sequence[i];
        }
        printf("The sum before the maximum is %i\n", sum_after);
    
    }

    return 0;
}