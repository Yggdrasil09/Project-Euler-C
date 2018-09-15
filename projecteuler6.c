#include<stdio.h>

int main()
{
  int x=0,y,z=100,t;
for(y=0;y<(z+1);y++)
 { x=x+y*y;
  }
 t=(z*(z+1))/2;
 t=t*t;
printf("the difference is %d",t-x);  
}