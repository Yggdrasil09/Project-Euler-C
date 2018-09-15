#include<stdio.h>

int main()
{
     int x;
   printf("enter the number\n");
   scanf("%d",&x);
   float y=1,g=0;
   while(g==0)
    {
      y=(y+x/y)/2;
      if(y*y==(float)x)
        {g=1;}
    }
   printf("the root is %f",y);
}