#include <stdio.h>
int main()
{
    int a[10], i, n, small, large;

    printf("Enter The Array Size:");
    scanf("%d", &n);

    printf("ENTER ELEMENTS OF ARRAY");
    for (i = 0; i < n; i++) // read the elements of an array
        scanf("%d", &a[i]);
    small = a[0];
    large = a[0];
    for (i = 0; i < n; i++) // read the elements of an array
    {
        if (a[i] < small) // check the condition for minimum value
            small = a[i];
        if (a[i] > large) // check the condition for maximum value
            large = a[i];
    }
    printf("largest value is:%d\n", large);
    printf("smallest value is:%d\n", small);

    return 0;
}