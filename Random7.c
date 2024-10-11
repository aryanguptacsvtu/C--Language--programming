#include <stdio.h>

int test(int a)
{
    int b = 10;
    a = 2;
    a = a * b;
    return a;
}
int main()
{
    int a = 100;
    int b = 500;
    a = test(b);
    
    printf("\n%d %d", a, b);

    return 0;
}