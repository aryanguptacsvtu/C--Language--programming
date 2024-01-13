#include <stdio.h>
int main()
{
    char line[80];

    printf("Enter the string:");
    scanf("%[^\n]", line);         // Using edit set conversion code %[..]

    printf("your string is:");
    printf("%s", line);
    return 0;
}