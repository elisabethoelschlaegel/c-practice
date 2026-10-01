#include <stdio.h>

int main(void)
{
    int numbers[5];
    printf("Input 5 integers:\n");
    int highest = numbers[0];

    int i;
    int position;

    for (i = 0; i < 5; i++)
    {
        scanf("%i", &numbers[i]);
        if (numbers[i] > highest)
        {
            highest = numbers[i];
            position = i + 1;
        }
    }

    printf("Highest value: %i\n", highest);
    printf("Position %i\n", position);

    return 0;
}