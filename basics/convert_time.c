#include <stdio.h>

int main(void)
{
    int sec;
    printf("Input seconds: ");
    scanf("%i", &sec);

    int H = sec / 3600;
    int M = sec % 3600 / 60;
    int S = sec % 3600 % 60;

    printf("H:M:S - %i:%i:%i\n", H, M, S);

    return 0;
}