#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number;
    printf("Number of integers: ");
    scanf("%i", &number);

    int *integer = malloc(sizeof(int) * number);

    if (integer == 0)
    {
        return 1;
    }

    for (int i = 0; i < number; i++)
    {
        printf("Integer %i: ", i + 1);
        scanf("%i", &integer[i]);
    }

    int rarest = integer[0];
    int rarest_count = number;

    for (int i = 0; i < number; i++)
    {
        int count = 0;
        
        for (int j = 0; j < number; j++)
        {
            if (integer[j] == integer[i])
            {
                count++;
            }
        }  
        
        if (count < rarest_count || (count == rarest_count && integer[i] < rarest))
        {
            rarest = integer[i];
            rarest_count = count;
        }
    }      

    printf("%i\n", rarest);

    free(integer);
    return 0;
}