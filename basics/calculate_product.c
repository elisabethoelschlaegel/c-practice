#include <stdio.h>

int main(void)
{
    int first;
    printf("Input the first integer: ");
    scanf("%d", &first);

    int second;
    printf("Input the second integer: ");
    scanf("%d", &second);

    printf("Product of the above two integers = %d\n", first * second);

    return 0;
}