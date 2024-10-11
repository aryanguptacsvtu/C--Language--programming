#include <stdio.h>
void main()
{
    char string[] = "HELLO WORLD";
    int m;
    for (m = 0; string[m] != '\0'; m++)
    {
        if ((m % 2) == 0)
        {
            printf("%c", string[m]);
        }
    }
}