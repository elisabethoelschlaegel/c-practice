#include <stdio.h>

int main(void)
{
    int p, q, r, s;

    printf("Input the first integer: ");
    scanf("%i", &p);

    printf("Input the second integer: ");
    scanf("%i", &q);

    printf("Input the third integer: ");
    scanf("%i", &r);

    printf("Input the fourth integer: ");
    scanf("%i", &s);

    if (q > 0 && r > 0 && s > 0 && p % 2 == 0 && q > r && s > p && r + s > p + q)
    {
        printf("Correct values\n");
        return 0;
    }
    printf("Wrong values\n");
    return 0;
}