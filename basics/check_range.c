#include <stdio.h>

int main(void)
{
    int x;
    printf("Input an integer: ");
    scanf("%i", &x);

    if (x < 0 || x > 80)
    {
        printf("Error\n");
    }
    else if (x >= 0 && x <= 20)
    {
        printf("Range [0, 20]\n");
    }
    else if (x > 20 && x <= 40)
    {
        printf("Range (20, 40]\n");
    }
    else if (x > 40 && x <= 60)
    {
        printf("Range (40, 60]\n");
    }
    else
    {
        printf("Range (60, 80]\n");
    }

    return 0;
}