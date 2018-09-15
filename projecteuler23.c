#include<stdio.h>

int main()
{
    int x,y,z;
    int t;
    int sum1=0;
    int sum2=0;
    int check=0;
    int count=0;

    for(y=1;y<2812;y++)
    {
        for(z=1;z<y;z++)
        {
            x=y-z;
            for(t=1;t<z;t++)
            {
                if(z%t==0)
                {
                    sum1=sum1+t;
                }
            }
            for(t=1;t<x;t++)
            {
                if(x%t==0)
                {
                    sum2=sum2+t;
                }
            }
            if((sum1>z)&&(sum2>x))
            {
                check++;
            }
            sum1=0;
            sum2=0;
        }
        if(check==0)
        {
            count++;
        }
        check=0;
    }
    printf("%d",count);
}