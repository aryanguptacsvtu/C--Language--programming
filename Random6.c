#include <stdio.h>

int main()
{
    int n, count = 0;
    double sum = 0.0;

    printf("Enter numbers (enter 0 to stop):\n");

    do
    {
        scanf("%d", &n);
        if (n != 0)
        {
            sum += n;
            count++;
        }
    } while (n != 0);

    if (count != 0)
    {
        double average = sum / count;
        printf("Average of entered numbers: %.2lf\n", average);
    }
    else
    {
        printf("No numbers entered.\n");
    }

    return 0;
}
