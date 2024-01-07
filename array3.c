#include<stdio.h>
int main()
{

    int i, sum=0, pro=1,a[10];

    printf("Enter the numbers:");
    for ( i = 0; i < 10; i++)
    {
     scanf("%d",&a[i]);
    }
    for ( i = 0; i < 10; i++)
    {
      if (a[i]%2==0)
      {
       sum=sum+a[i];
      }
      else
      pro=pro*a[i];
    }
    printf("Sum of even numbers is:%d\n Product of odd numbers is:%d",sum,pro);
    return 0;
}