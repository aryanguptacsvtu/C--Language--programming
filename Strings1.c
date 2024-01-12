#include <stdio.h>
int main()
{
    char a[50];
    printf("Enter your name:");
    scanf("%s", &a);                // %s reads only one word.
    printf("Your name is %s\n", a); //%s terminates its input on the first whitespace it finds.

    return 0;
}