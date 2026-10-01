#include <stdio.h>

int main(void)
{
    float km;
    printf("Input total distance in km: ");
    scanf("%f", &km);

    float fuel;
    printf("Input total fuel spent in liters: ");
    scanf("%f", &fuel);

    printf("Average consumption (km/lt) %.3f\n", km / fuel);

    return 0;
}