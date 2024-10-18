#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, i, j;
    char **pattern;

    printf("Enter the number of rows: ");
    scanf("%d", &m);

    printf("Enter the number of columns: ");
    scanf("%d", &n);

    pattern = (char **)malloc(m * sizeof(char *)); // Dynamically allocate memory for 'm' rows
    
    for (i = 0; i < m; i++)
    {
        pattern[i] = (char *)malloc(n * sizeof(char)); // Dynamically allocate memory for 'n' columns in each row
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            pattern[i][j] = '*';
        }
    }

    for (i = 0; i < m; i++) // Print the pattern
    {
        for (j = 0; j < n; j++)
        {
            printf("%c", pattern[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < m; i++) // Free the allocated memory
    {
        free(pattern[i]);
    }
    free(pattern);

    return 0;
}
