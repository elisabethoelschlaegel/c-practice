#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float totalmarks;
};

int main(void)
{   
    struct Student student1, student2;

    printf("First student name: ");
    scanf("%s", student1.name);
    printf("Age: ");
    scanf("%i", &student1.age);
    printf("Total marks: ");
    scanf("%f", &student1.totalmarks);

    printf("Second student name: ");
    scanf("%s", student2.name);
    printf("Age: ");
    scanf("%i", &student2.age);
    printf("Total marks: ");
    scanf("%f", &student2.totalmarks);

    printf("%s: %i years old, %f total marks\n", student1.name, student1.age, student1.totalmarks);
    printf("%s: %i years old, %f total marks\n", student2.name, student2.age, student2.totalmarks);

    float average = (student1.totalmarks + student2.totalmarks)/2;
    printf("Average marks: %f", average);
    return 0;
}
