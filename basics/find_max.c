#include <stdio.h>

int main(void)
{
    int i1;
    printf("Input the first integer: ");
    scanf("%i", &i1);

    int i2;
    printf("Input the second integer: ");
    scanf("%i", &i2);

    int i3;
    printf ("Input the third integer: ");
    scanf("%i", &i3);

    if (i1 >= i2 && i1 >= i3)
    {
        printf("Maximum value of three integers: %i\n", i1);
        return 0;
    }
    
    if (i2 >= i1 && i2 >= i3)
    {
        printf("Maximum value of three integers: %i\n", i2);
        return 0;
    }
    
    if (i3 >= i1 && i3 >= i2)
    {
        printf("Maximum value of three integers: %i\n", i1);
        return 0;
    }

    return 1;
}