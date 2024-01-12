#include <stdio.h>
int main()
{
    char ads[10];
    printf("Enter your name:");
    scanf("%7s", &ads);             // Decalring the width for scanning the string.
    printf("Your name is %s", ads); // Terminates on first whitespace it finds.

    return 0;
}