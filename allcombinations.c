#include<stdio.h>

int main()
{
  int n,r;

  printf("Enter the value of array\n");
  
  scanf("%d",&n);
  int x[n],y,b=0,t,z,s;

  printf("enter the values in the array\n");

  for(y=0;y<n;y++)
    {scanf("%d",&x[y]);}

  printf("enter the combination number\n");
  scanf("%d",&r);
  
  for(y=0;b<=n*(n-1);y++)
    {
      t=x[y];
      x[y]=x[y+1];
      x[y+1]=t;

      for(z=0;z<=n-r;z++)
        {
          for(s=0;s<r;s++)
            {printf("%d",x[s+z]);}

          printf("\n");

        }
      
      b++;

      if(y==n-2)
       {y=-1;}

    }

}