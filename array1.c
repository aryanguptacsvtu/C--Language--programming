#include <stdio.h>
int main()
{
    int i, a[10];
    printf("Enter the numbers:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i = i + 2)
    {
        printf("Alternate elements are:%d\n", a[i]);
    }
    return 0;
}
