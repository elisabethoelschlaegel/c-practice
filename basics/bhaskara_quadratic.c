#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c;

    printf("Input the first number(a): ");
    scanf("%i", &a);

    printf("Input the second number(b): ");
    scanf("%i", &b);

    printf("Input the third numer(c): ");
    scanf("%i", &c);

    float root1 = (-b + sqrt(pow(b, 2)-4*a*c)) / (2 * a);
    float root2 = (-b - sqrt(pow(b, 2)-4*a*c)) / (2 * a);

    printf("Root1 = %.5f\n", root1);
    printf("Root2 = %.5f\n", root2);

    return 0;
}