#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "HELLO World!";
    printf("Original String: %s\n", str);

    // Reverses the string.
    strrev(str);

    printf("Reversed string: %s\n", str);

    return 0;
}