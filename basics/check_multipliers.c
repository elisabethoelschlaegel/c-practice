#include <stdio.h>

int main(void)
{
    int first, second;

    printf("Input the first number: ");
    scanf("%i", &first);

    printf("Input the second number: ");
    scanf("%i", &second);

    if (first % second == 0 || second % first == 0)
    {
        printf("Multiplied!\n");
        return 0;
    }
    
    printf("Not multiplied.\n");
    return 0;
}