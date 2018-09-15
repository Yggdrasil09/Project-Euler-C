#include<stdio.h>

void main() {

int x=0,y,z;
for(y=0;y<1000;y++)
{   if(y%3==0||y%5==0)
       {  x=x+y;}
}
printf("the value of the numbers which are the multiples of 3 and 5 is %d",x);
}
