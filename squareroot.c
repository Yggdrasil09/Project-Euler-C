#include<stdio.h>

int main()
{
    int x;
   printf("enter the number\n");
   scanf("%d",&x);

   float y=1,g=0;

   int count=0;

   
   while(count<10)
    {
      y=(y+x/y)/2;
     
      count++;

    }

   printf("the root is %f",y);
}