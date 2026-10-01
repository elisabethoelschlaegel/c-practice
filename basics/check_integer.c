#include <stdio.h>

int main(void)
{
    char *first;
    char *second;

    int number;
    printf("Input an integer: ");
    scanf("%d", &number);

    if (number == 0)
    {
        printf("Zero\n");
        return 0;
    }
    
    if (number > 0)
    {
        first = "Positive";
    }
    else
    {
        first = "Negative";
    }
    
    if (number % 2 == 0)
    {
        second = "Even";
    }
    else
    {
        second = "Odd";
    }

    printf("%s %s\n", first, second);

    return 0;
}