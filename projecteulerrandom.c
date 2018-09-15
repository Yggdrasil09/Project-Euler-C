#include<stdio.h>

void main()
{
    int x[4],y,b=0,max=0,min=0,t,z,s,u=0;
    printf("enter the 4 digit number\n");
    for(y=0;y<4;y++)
      {scanf("%d",&x[y]);}
    for(b=0,y=1000;b<4,y>=1;b++,y=y/10)
      {max=max+(x[b]*y);}
    min=max;
    b=0;
    for(y=0;b<4*3;y++)
      { t=x[y];
        x[y]=x[y+1];
        x[y+1]=t;
        for(s=0,z=1000;s<4,z>=1;s++,z=z/10)
          {u=u+x[s]*z;}
        if(u>max)
          {max=u;}
        if(u<min)
          {min=u;}
        u=0;
        if(y==2)
          {y=-1;}
        b++;
      }
    printf("%d  %d",max,min);
 }