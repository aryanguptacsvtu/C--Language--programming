#include <stdio.h>
int main()
{

    int a, b, x;
    float s;
    printf("Enter values of a,b,x:");
    scanf("%d%d%d", &a, &b, &x);

    s = (a * x + b) / (a * x - b);
    printf("the value of s=%f", s);

    return 0;
}