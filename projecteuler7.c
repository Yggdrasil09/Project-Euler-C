#include<stdio.h>

int main()
{
    int x,z,t,w=0;
unsigned int y;
for(y=2;y<300000;y++)
 {  t=0;
    for(z=2;z<y;z++)
      {  if(y%z==0)
           { t=1;}             //for efficient use break
        }
   if(t==0)     
    {w=w+1;}
   if(w==10000&&t==0)
    {printf("the value is %d",y);}
  }
}