#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c;
    int s;
    float area;

    printf("Enter the sides of triangle:");
    scanf("%d%d%d", &a, &b, &c);
    printf("The sides are:%d,%d,%d\n", a, b, c);

    s = (a + b + c) / 2;
    printf("The value of s is %d\n", s);
    area = sqrt((s * (s - a) * (s - b) * (s - c)));
    printf("The area of triangle is:%f", area);
}
