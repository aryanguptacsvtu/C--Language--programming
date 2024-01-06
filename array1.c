#include <stdio.h>
int main()
{
    int i, a[10];
    printf("Enter the numbers:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Alternate elements are:");
    for (i = 0; i < 10; i = i + 2)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
