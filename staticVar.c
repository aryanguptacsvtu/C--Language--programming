#include <stdio.h>

void myFunction()
{
    static int staticVar = 30; // static variable
    static int count;          // automatically takes 0 value if not initialised.
    printf("Static variable: %d\n", staticVar);
    printf("Static variable: %d\n", count);
    staticVar++;
    count++;
}

int main()
{
    myFunction();
    myFunction();
    myFunction();
    return 0;
}
