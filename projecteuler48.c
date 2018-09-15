#include<stdio.h>
#include<math.h>

int main()
{
   double x,y,z;
   double mult=1,sum=0;

   for(y=1;y<=100;y++)
   {
       for(z=1;z<=y;z++)
       {
           mult=mult*y;
       }
        sum=sum+fmod(mult,10000000000);
       mult=1;
   }
   printf("%.0lf",sum);
}