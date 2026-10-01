#include <stdio.h>

int main(void)
{
    int a;
    printf("How many inputs for a? ");
    scanf("%i", &a);

    if (a < 1 || a > 100)
    {
        printf("Range: 1 <= a <= 100\n");
        return 1;
    }
    
    int numbersa[a];

    printf("Input sequences a: ");
    for (int i = 0; i < a; i++)
    {
        if (scanf("%i", &numbersa[i]) != 1)
        {
            printf("Error\n");
            return 1;
        }

        if (numbersa[i] < 1 || numbersa[i] > 100)
        {
            printf("Range: 1 <= ai <= 100\n");
            return 1;
        }
    }

    int b;
    printf("How many inputs for b? ");
    scanf("%i", &b);

    if (b < 1 || b > 100)
    {
        printf("Range: 1 <= b <= 100\n");
        return 1;
    }
    
    int numbersb[b];

    printf("Input sequences b: ");
    for (int i = 0; i < b; i++)
    {
        if (scanf("%i", &numbersb[i]) != 1)
        {
            printf("Error\n");
            return 1;
        }

        if (numbersb[i] < 1 || numbersb[i] > 100)
        {
            printf("Range: 1 <= bi <= 100\n");
            return 1;
        }
    }
    
    int count = 0;
    int intersection[a];

    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (numbersb[i] == numbersa[j])
            {
                int exists = 0;

                for (int k = 0; k < count; k++)
                {
                    if (intersection[k] == numbersb[i])
                    {
                        exists = 1;
                    }
                }
                
                if (exists == 0)
                {
                intersection[count] = numbersb[i];
                count++;
                }

                break;
            }
        }
    }

    for (int i = 0; i < count; i++)
    {
        for (int j = 1; j < count - i; j++)
        {
            if (intersection[i] > intersection[i + j])
            {
                int temp = intersection[i];
                intersection[i] = intersection[i + j];
                intersection[i + j] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++)
    {
        printf("%i ", intersection[i]);
    }
    printf("\n");
}
