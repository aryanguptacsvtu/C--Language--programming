#include <stdio.h>

int main()
{
    int n;

    printf("Enter the no. of movies:");
    scanf("%d", &n);

    int k = n * 2;
    int arr[k];

    printf("Enter the starting & ending times:");
    for (int i = 0; i < k; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 1;
    int j = 1;

    while (j < k)
    {
        for (int m = 0; m < k; m = m + 2)
        {
            if (m != j)
            {
                if (arr[j] == arr[m])
                {
                    sum++;
                }
            }
        }
        j = j + 2;
    }

    printf("Max. no. of movies you can watch:%d", sum);

    return 0;
}

/* "Movie Festival":-
In a movie festival, n movies will be shown. You know the starting and ending time of each movie. What is the maximum number of movies you can watch entirely?

"Input":-
The first input line has an integer n: the number of movies. After this, there are n lines that describe the movies. Each line has two integers a and b: the starting and ending times of a movie.

"Output":-
Print one integer: the maximum number of movies.*/