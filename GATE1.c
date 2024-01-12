#include <stdio.h>
int main()
{
    char c[] = "GATE2011";
    char *p = c;
    // Declaring a character pointer 'p' and pointing it to beginning of array 'c'.

    printf("%s", p + p[3] - p[1]); // p[3]="E"=69(ASCII VALUE) , p[1]="A"=65(ASCII VALUE).
    // p+p[3]-p[1] means advancing pointer by 4 positions.

    return 0;
}