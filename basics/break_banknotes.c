#include <stdio.h>

int main(void)
{
    int amount;
    printf("Input the amount: ");
    scanf("%i", &amount);

    int n100 = amount / 100;
    int n50 = amount % 100 /50;
    int n20 = amount % 100 % 50 / 20;
    int n10 = amount % 100 % 50 % 20 / 10;
    int n5 = amount % 100 % 50 % 20 % 10 / 5;
    int n2 = amount % 100 % 50 % 20 % 10 % 5 / 2;
    int n1 = amount % 100 % 50 % 20 % 10 % 5 % 2;

    printf("%i Note(s) of 100.00\n", n100);
    printf("%i Note(s) of 50.00\n", n50);
    printf("%i Note(s) of 20.00\n", n20);
    printf("%i Note(s) of 10.00\n", n10);
    printf("%i Note(s) of 5.00\n", n5);
    printf("%i Note(s) of 2.00\n", n2);
    printf("%i Note(s) of 1.00\n", n1);

    return 0;
}