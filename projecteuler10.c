#include<stdio.h>

int main()
{
     int x=0,y,z,t;
for(y=2;y<100;y++)
 {  t=0; 
    for(z=2;z<y;z++)
      {  if(y%z==0)
           { t=1;}
        }
    if(t==0)
     { x=x+y;}
  }
printf("the value is %d",x);
}