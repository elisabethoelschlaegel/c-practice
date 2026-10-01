#include <stdio.h>

int main(void)
{
    unsigned int first, second, third;

    printf("Input the first number: ");
    scanf("%u", &first);

    printf("Input the second number: ");
    scanf("%u", &second);

    printf("Input the third number: ");
    scanf("%u", &third);

    if (first > 0 && second > 0 && third > 0 && (first + second > third || second + third > first || first + third > second))
    {
        float perimeter = first + second + third;
        printf("Perimeter = %.1f\n", perimeter);

        return 0;
    }
    
    return 1;
}