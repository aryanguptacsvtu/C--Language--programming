#include <stdio.h>
int main()
{
    char a[50];
    printf("Enter your name:");
    gets(a);                 // Using the gets() function.
                            
    printf("Your name is:");
    puts(a);                 // Good method.
    return 0;
}