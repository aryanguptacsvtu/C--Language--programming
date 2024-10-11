#include <stdio.h>
int main()
{
    int z, x = 5, y = -10, a = 4, b = 2;

    z = x++ - --y * b / a;

    printf("%d", z);
    return 0;
}