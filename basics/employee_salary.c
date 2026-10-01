#include <stdio.h>

int main(void)
{
    char id[11];
    printf("Input the Employees ID(Max 10 chars): ");
    scanf("%10s", id);

    float hrs;
    printf("Input the working hors: ");
    scanf("%f", &hrs);

    float salary_hr;
    printf("Salary amount/hr: ");
    scanf("%f", &salary_hr);

    float salary = hrs * salary_hr;

    printf("Employees ID = %s\n", id);
    printf("Salary = U$ %.2f\n", salary);

    return 0;
}