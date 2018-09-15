#include<stdio.h>

int main()
{
    int x=1,y,z=1,t,s,count=0;

for(y=0;y<200;y++)
{ y=x+z;
  x=z;
  z=y;
printf("%d\t",y);
 
for(t=10;y*10>t;t=t*10)
 {  s=(y%t)/(t/10);
    if((y/t)==0)
     break;
  count=count+1;
 }
if(count==3)
{ printf("the number is %d",y);
break;
}
  }
}