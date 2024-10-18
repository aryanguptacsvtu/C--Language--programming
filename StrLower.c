#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "HELLO World!";
    printf("Original String: %s\n", str);

    // Convert the string to lowercase
    strlwr(str);

    printf("String in lowercase: %s\n", str);

    return 0;
}
