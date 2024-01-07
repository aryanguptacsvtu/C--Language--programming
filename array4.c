#include <stdio.h>
int main()
{
    int a[3][3], i, j, even = 0, odd = 0;

    printf("Enter the array elements:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Array elements are:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\n", a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] % 2 == 0)
            {
                even++;
            }
            else
                odd++;
        }
    }
    printf("Total even no.:%d\nTotal odd n.:%d", even, odd);
    return 0;
}