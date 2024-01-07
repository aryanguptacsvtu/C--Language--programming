#include <stdio.h>
int main()
{
    int a[10], i, flag = 0, key, pos;
    for (i = 0; i < 10; i++)
    {
        printf("Enter number:");
        scanf("%d", &a[i]);
    }
    printf("Enter the no.to search:");
    scanf("%d", &key);
    for (i = 0; i < 10; i++)
    {
        if (a[i] == key)
        {
            pos = i + 1;
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Number found at %d position.\n", pos);
    }
    else
    {
        printf("Number not found.\n");
    }

    return 0;
}