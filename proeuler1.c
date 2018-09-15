#include<stdio.h>
#include<math.h>

int main()
{
  int n;
  printf("enter the number\n");
  scanf("%d",&n);
  int y,sum=0,t=1,z,check=0;
  double x,count=0;
  x=pow(10,n);
  for(y=1;y<x;y++)
    { if(y%23==0)
        { while(y/t!=0)
            { t=t*10;
              check++;
            }
          t=10;
          for(z=0;z<=check;z++)
            { sum=sum+(y%t)/(t/10);
              t=t*10;
            }
          if(sum==23)
            {count++;}
        }
      sum=0;
      t=1;
      check=0;
    }
  printf("%f",count);
}








