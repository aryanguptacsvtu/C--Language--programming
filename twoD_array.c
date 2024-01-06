#include <stdio.h>
int main()
{
    int arr[3][4];
    int i, j, k;
    printf("Enter array element:");
    for (i = 0; i < 3; i++)
    { // Taking input using the two loops
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Accessing individual elements of 2D array:");
    for (i = 0; i < 3; i++)
    { // Printing output using the two loops
        for (j = 0; j < 4; j++)
            for (j = 0; j < 4; j++)
            {
                printf("%d ", arr[i][j]);
            }
    }
    return 0;
}