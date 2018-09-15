#include<stdio.h>

int main()
{
    long int x=100;
int y,z,t;
for(y=2;y<x/2;y++)
 {  t=0;
     for(z=2;z<y/2;z++)
      {    if(y%z==0)
              {t=1;}
       }
   if((t==0)&&(x%y==0))
    {     printf("%d\t",y);
      }
}
}