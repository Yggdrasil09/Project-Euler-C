#include<stdio.h>

int main()
{
    int x[20][20];
    int y,z;(
    for(y=0;y<20;y++)
    {
        for(z=0;z<20;z++)
        {
            scanf("%d",&x[y][z]);
        }

    }

    printf("upper triangle");

    int t;
    int check=0;
    int check1=x[0][0]*x[1][1]*x[2][2]*x[3][3];
    int count[2];
    int check2=0;

    for(z=20,y=0;z>=1,y<20;z--,y++)
    {
       for(t=0;t<=z-4;t++)
       {
           check=x[t][y]*x[t+1][y+1]*x[t+2][y+2]*x[t+3][y+3];
           if(check>check1)
           {
               count[0]=t;
               count[1]=y;
               check2=1;
           }
       }

    }

    printf("lower triangle");

    for(z=20,y=0;z>=1,y<20;z--,y++)
    {
       for(t=0;t<=z-4;t++)
       {
           check=x[y][t]*x[y+1][t+1]*x[y+2][t+2]*x[y+3][t+3];
           if(check>check1)
           {
               count[0]=y;
               count[1]=t;
               check2=1;
           }
       }

    }

    if(check2==0)
    { 
        count[0]=0;
        count[1]=0;
    }

    printf("the coordinates are %d %d",count[0],count[1]);

}