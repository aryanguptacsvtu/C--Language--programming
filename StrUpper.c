#include <stdio.h>
#include <ctype.h> // For toupper()

int main()
{
    char str[] = "HELLO World!";
    printf("Original String: %s\n", str);

    // Convert the string to uppercase
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = toupper(str[i]);
    }

    printf("String in uppercase: %s\n", str);

    return 0;
}
