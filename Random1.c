#include <stdio.h>
void main()
{
  int m, n, p;
  for (m = 0; m < 3; m++)
    for (n = 0; n < 3; n++)
      for (p = 0; p < 3; p++)
      {
        if (m + n + p == 2)
        {
          goto print;
        print:
          printf("%d,%d,%d\n", m, n, p);
        }
      }
}