#include<stdio.h>

int main()
{
    int x,y,z,t,s;
for(y=1;y<1000;y++)
  {  for(x=1;x<1000;x++)
       {  z=x*x+y*y;       //add another conditional statement for x!=y 
         for(t=1;t<1000;t++)
           { if(z==t*t)
   	       {  if(x+y+t==1000)
		    { printf("the value is %d %d %d",x,y,t);}
                 }
             }
          }
    }
}