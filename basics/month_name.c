#include <stdio.h>

int main(void)
{
    char *month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    
    int number;
    printf("Input a number between 1 to 12 to get the month name: ");
    scanf("%i", &number);
    if (number > 12 || number < 1)
    {
        return 1;
    }

    printf("%s\n", month[number - 1]);

    return 0;
}