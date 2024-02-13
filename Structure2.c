#include <stdio.h>
struct student
{
    char name[50];
    float marks;
    int roll;
} s[5];

int main()
{
    int i;
    printf("Enter information of students:\n");
    for (i = 0; i < 5; i++)
    {
        s[i].roll = i + 1;
        printf("For roll number %d\n\n", s[i].roll);

        printf("Enter name:");
        scanf("%s", &s[i].name);

        printf("Enter marks:");
        scanf("%f", &s[i].marks);

        printf("\n");
    }
    for (i = 0; i < 5; i++)
    {
        printf("Roll number:%d\n", i + 1);

        printf("Name:");
        puts(s[i].name);

        printf("Marks:%f\n", s[i].marks);
        printf("\n");
    }

    return 0;
}