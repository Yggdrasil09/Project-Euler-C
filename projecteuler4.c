#include<stdio.h>

int main()
{
    int x,y,z,t,w,u,v=0;
for(w=100;w<1000;w++)
 {   for(u=100;u<1000;u++)
     { x=u*w;
       z=x; 
       t=0;
        while(x!=0)
          {  y=x%10;
             t=t*10+y;
             x=x/10;
           }
         if(t==z)
           {if(v<z)
               v=z;
             }  
        }
  }

printf("the value is %d ",v);

}