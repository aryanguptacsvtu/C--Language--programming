#include <stdio.h>
int f(char *p);

void main()
{
    char str[] = "ANSI";
    printf("%d", f(str));
}
int f(char *p)
{
    char *q = p;
    while (*++p);
    {
        return (p - q);
    }
}