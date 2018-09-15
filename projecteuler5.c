#include<stdio.h>

int main()
{
  int x,y,z;
for(y=2000;y<3000;y++)
 { x=0;
    for(z=1;z<11;z++)
      { if(y%z==0)
           { x=x+1;
             }
          }
   if(x==10)
     { printf("the number is %d",y);
       } 

  }  
}