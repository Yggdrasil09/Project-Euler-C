#include<stdio.h>

int main()
{
    int x=1,y,z=2,t,w=0;
for(y=1;y<4000;y++)
{  t=x+z;
   x=z;
   z=t;
 if(t<4000000)
   {  if(t%2==0)
        { w=w+t;
         }
    }
}   
printf("the value of the even numbers of the fibbonacci series is %d\n",w+2); 
}