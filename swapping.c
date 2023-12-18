#include <stdio.h>
int main()
{
    int v1, v2, temp;
    printf("Enter the numbers:");
    scanf("%d%d", &v1, &v2);
    printf("Before swapping the number:\n first number =%d, second number=%d\n", v1, v2);
    temp = v1;
    v1 = v2;
    v2 = temp;
    printf("after swapping :v1=%d,v2=%d", v1, v2);
    return 0;
}