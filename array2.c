#include <stdio.h>
int main()
{
    int i, j, arr[5][5], sum = 0;

    printf("Enter the elements:");   // Reading the elements of 5x5 array.
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Row total:");            // Getting the sum of row elements.
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            sum += arr[i][j];
        }
        printf("%d\n", sum);
        sum=0;
    }
   
    printf("Column total:");        // Getting the sum of column elements.
    for (j = 0; j < 5; j++)
    {
        for (i= 0; i< 5; i++)
        {
            sum += arr[i][j];
        }
        printf("%d\n", sum);
        sum=0;
    }
    

    return 0;
}