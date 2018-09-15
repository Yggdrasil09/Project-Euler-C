#include<stdio.h>

void main()
{
    int x=0,y,z,t;
for(y=2;y<10;y++)
  {   z=(y*(y+1))/2;  
       for(t=1;t<=z;t++)
         { if(z%t==0)
             {x=x+1;}
           }
       if(x>5)
         {printf("the value is %d %d",y,z);}
    }
 }