#include<stdio.h>

int main()
{
  int n;
  printf("enter the number n\n");
  scanf("%d",&n);
  int x,y,z;
  int sum=0;
  int sum1=0;
  for(y=1;y<=n;y++)
  {
    for(z=1;z<=y;z++)
    {
       if(y%z==0)
       {
          sum=sum+z*z;
       }
    }
    sum1=sum1+sum;
    sum=0;
  }
  printf("%d",sum1);
}