#include <stdio.h>
int main()
{
  int n;

  printf("Enter the no. of rows:");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) // No. of lines(rows)=>i
  {
    for (int j = 1; j <= i; j++) // No. of columns =>j
    {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}