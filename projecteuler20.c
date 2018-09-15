#include<stdio.h>

int main()
{
    long long int x,y,z,t=0;
printf("enter the value of of n\n");
scanf("%lld",&x);
for(y=x-1;y>0;y--)
{  x=x*y; 
}

printf("the factorial is %lld \n",x);
for(y=10;x*10>y;y=y*10)
{ 
  z=(x%y)/(y/10);
  t=t+z;
}
printf("the sum of digits is %lld\n",t);
}