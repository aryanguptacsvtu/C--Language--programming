#include <stdio.h>

// Function to find the trace of a square matrix
int findTrace(int matrix[10][10], int size)
{
    int trace = 0;
    for (int i = 0; i < size; i++)
    {
        trace += matrix[i][i];
    }
    return trace;
}

int main()
{
    int matrix[10][10];
    int size;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find and print the trace of the matrix
    int trace = findTrace(matrix, size);
    printf("Trace of the matrix is: %d\n", trace);

    return 0;
}
