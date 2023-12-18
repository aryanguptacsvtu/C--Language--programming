#include <stdio.h>
int main()
{
    int a[10], i, s = 0;
    printf("Enter 10 numbers:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        s = s + a[i];
    }
    printf("\n numbers stored in array:\n");
    for (i = 0; i < 10; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }
    printf("\n Sum of integer no.:%d", s);
    return 0;
}