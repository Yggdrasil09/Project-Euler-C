#include<stdio.h>
//kaperkar constant
int main()
{
    int x[4],y,t,b=0,max=0,min=0,krope,count=0,g=0;
    printf("enter the numbers in the array\n");
    for(y=0;y<4;y++)
      {scanf("%d",&x[y]);}
    while(g==0)
    {
    for(y=0;b<4*3;y++)
      {if(x[y+1]>x[y])
         {t=x[y];
          x[y]=x[y+1];
          x[y+1]=t;
          }
       if(y==2)
         {y=-1;}
       b++;
      }
    for(b=1000,y=0;y<4;y++,b=b/10)
      {
       max=max+x[y]*b;
      }
    for(b=1000,y=3;y>=0;y--,b=b/10)
      {
       min=min+x[y]*b;
      }
    krope=max-min;
    if(krope!=6174)
      {for(b=10000,y=0;y<4;y++,b=b/10)
         {x[y]=(krope%b)/(b/10);}
        count=count+1;
      }
    else
      {g=1;}
    max=0;
    min=0;
    }
  printf("the kropekar routine is %d",count+1);
 }