#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the values of x and y :");
    scanf("%d %d", &x, &y);

    if (x > y)
    {
        printf("no");
    }
    else if (x < y)
    {
        printf("yes");
    }
    else if (x == y)
    {
        printf("no");
    }
    return 0;
}
