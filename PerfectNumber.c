#include <stdio.h>
int main()
{
    int n, i = 1, sum = 0;
    printf("Enter a no.:");
    scanf("%d", &n);

    while (i < n)
    {
        if (n % i == 0)
            sum = sum + i;
        i++;
    }
    if (sum == n)
    {
        printf("%d is a perfect no.", n);
    }

    else
    {
        printf("%d is not a perfect no.", n);
    }
    return 0;
}