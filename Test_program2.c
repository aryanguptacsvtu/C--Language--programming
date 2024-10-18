#include <stdio.h>
int main()
{
    int N;
    int sum = 0;

    printf("Enter the upper limit:");
    scanf("%d", &N);

    for (int i = 1; i < N; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum = sum + i;
        }
    }
    printf("The sum is:%d", sum);

    return 0;
}

/*"Problem Statement":-

Your task is to develop an efficient code to print all the sum of all numbers that are multiples of 3 and 5 below a given limit N.

"Input":-
The input consists of a single integer N, representing the upper limit.

"Output":-
Print the sum of all numbers that are multiples of both 3 and 5 below the given limit N.*/