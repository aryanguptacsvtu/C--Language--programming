#include <stdio.h> 
#include<conio.h>
int string_ln(char *);
void main()
{
    char str[20];
    int length;
    

    printf("\nEnter any string : ");
    gets(str);

    length = string_ln(str);
    printf("The length of the given string %s is : %d", str, length);
    getch();
}

int string_ln(char *p) /* p=&str[0] */
{
    int count = 0;
    while (*p != '\0')
    {
        count++;
        p++;
    }
    return count;
}