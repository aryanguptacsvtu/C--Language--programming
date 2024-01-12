#include<stdio.h>
#include<string.h>
int main()
{
    char p[20];
    char *s="string";
    int length = strlen(s);  // Gets the length of s("6").
    int i;
    for ( i = 0; i < length; i++)
    {
       p[i]=s[length-i-1];    // Starts printing from "5"th index character("g").
        // p[i]=s[length-i]; This prints nothing.
    }
    printf("%s",p);
    return 0;
}