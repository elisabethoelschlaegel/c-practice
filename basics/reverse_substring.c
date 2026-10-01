#include <stdio.h>

int main(void)
{
    int n1;
    printf("Number 1: ");
    scanf("%i", &n1);

    int n2;
    printf("Number 2: ");
    scanf("%i", &n2);

    char word[100];
    printf("String: ");
    scanf("%s", word);
    
    int k = n2 - n1 + 1;
    char temp[k + 1];

    for (int i = 0; i < k; i++)
    {
        temp[i] = word[n1 + i - 1];
    }
    temp[k] = '\n';

    for (int i = 0; i < k / 2; i++)
    {
        char x = temp[i];
        temp[i] = temp[k - 1 - i];
        temp[k - 1 - i] = x;
    }

    for (int i = 0; i < k; i++)
    {
        word[n1 + i - 1] = temp[i];
    }

    printf("%s\n", word);
    return 0;

}