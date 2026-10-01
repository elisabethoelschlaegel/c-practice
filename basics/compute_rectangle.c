#include <stdio.h>

int main(void)
{
    int height = 7;
    int width = 5;

    int perimeter = 2 * (height + width);
    int area = height * width;

    printf("The perimeter of the rectangle = %i inches\n", perimeter);
    printf("Area of the rectabgle = %i square inches\n", area);

    return 0;
}