#include <stdio.h>
int main()
{
    char ads[10], ads2[10];
    printf("Enter your name again:");
    scanf("%s %s", &ads, &ads2); // Another method of strings input and output.
    printf("Your name is %s %s", ads, ads2);
    return 0;
}