#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "HELLO";
    char str2[] = "WORLD";

    printf("%s\n", strcat(str1, str2));
    printf("%d\n", strcmp(str1, str2));
    printf("%s\n", strcpy(str1, str2));

    return 0;
}