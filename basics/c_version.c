#include <stdio.h>

int main(void)
{
    if (__STDC_VERSION__ >= 201710L)
    {
        printf("We are using C18!\n");
        return 0;
    }
    else if (__STDC_VERSION__ >= 201112L)
    {
        printf("We are using C11!\n");
        return 0;
    }
    else if (__STDC_VERSION__ >= 199901L)
    {
        printf("We are using C99!\n");
        return 0;
    }
    else if (__STDC_VERSION__ >= 199409L)
    {
        printf("We are using C89/C90!\n");
        return 0;
    }
    return 1;
}