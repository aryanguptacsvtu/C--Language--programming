#include <stdio.h>
int main()
{
    char a[50];
    int i;

    printf("Enter your name:");
    gets(a);

    i = 0;          // Printing a string character by character.
    while (a[i] != '\0')
    {
        printf("%c\n", a[i]);
        i++;
    }

    return 0;
}