#include<stdio.h>

int main()
{
    int x,y,z;
    int count=0;
    int rep;
    int res=1;

    for(y=1;y<=10000;y++)
    {
        rep=y;
        for(z=1;z<=y;z=z*10)
        {
            ;
        }
        for(z=z/10;z>0;z=z/10)
        {
            x=rep/z;
            rep=rep%z;
            count++;
            if(count==1||count==10||count==100||count==1000||count==10000)
            {
               res=res*x; 
               printf("res%d ",res);
            }
        }
    }
    printf("%d",res);
}