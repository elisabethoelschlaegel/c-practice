#include <stdio.h>
#include <math.h>

int main(void)
{
    float radius;
    
    printf("Radius: ");
    scanf("%f", &radius);

    float perimeter = M_PI * 2 * radius;
    float area = M_PI * radius * radius;

    printf ("Perimeter of the Circle = %f\n", perimeter);
    printf ("Area of the Circle = %f\n", area);

    return 0;
}