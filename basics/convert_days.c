#include <stdio.h>

int main(void)
{
    int days;
    printf("Input no. of days: ");
    scanf("%i", &days);

    int years = days / 365;
    int moths = days % 365 / 30;
    days = days % 365 % 30;

    printf("%i Year(s)\n", years);
    printf("%i Month(s)\n", moths);
    printf("%i Day(s)\n", days);

    return 0;
}