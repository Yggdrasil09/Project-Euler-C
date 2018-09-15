#include<stdio.h>
#include<math.h>

int main()
{
    int x,y,z;
    int sum=0;

    for(y=1;y<=32000;y++)
    {
         for(z=1;z<=y;z=z*10)
         {
             x=(y%(z*10))/z;
             sum=sum+pow(x,5);        
         } 
         if(y==(int)sum)
         {
             printf("%d\n",y);
         }
         sum=0;
    }
}