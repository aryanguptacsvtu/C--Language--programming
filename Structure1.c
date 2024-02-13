#include <stdio.h>
struct student
{
    char name[50];
    float marks;
    int roll_No;

} s;

int main()
{
    printf("Enter the information:\n");

    printf("Enter name:");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter the roll no.:");
    scanf("%d", &s.roll_No);

    printf("Enter the marks:");
    scanf("%f", &s.marks);

    printf("Displaying the information:\n");

    printf("Name:%s", s.name);
    printf("Roll number:%d\n", s.roll_No);
    printf("Marks:%f", s.marks);

    return 0;
}