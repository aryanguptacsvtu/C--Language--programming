#include <stdio.h>

void func(int n)
{
    printf("%d ", n);
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = (n * 3) + 1;
        }
        printf(" %d ", n);
    }
}

int main()
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        return 1;
    }

    printf("Collatz sequence for %d: ", n);
    func(n);

    return 0;
}

/*"Problem Statement":-

Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this until n is one. 

For example, the sequence for n=3 is as follows:
3 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1*/