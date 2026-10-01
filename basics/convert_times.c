#include <stdio.h>

int main(void)
{
    int days = 1329;

    int years = days / 365;
    int weeks = days % 365 / 7;
    days = days % 365 % 7;

    printf("Years: %i\n", years);
    printf("Weeks: %i\n", weeks);
    printf("Days: %i\n", days);

    return 0;
}