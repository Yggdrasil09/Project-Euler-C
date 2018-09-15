#include<stdio.h>

int main()
{
    int x=0,y,z;
    int sum1=0;
    int sum2=0;

    for(y=1;y<=10000;y++)
    {
        for(z=1;z<y;z++)
        {
            if(y%z==0)
            {
                sum1=sum1+z;
            }
        }
        for(z=1;z<sum1;z++)
        {
            if(sum1%z==0)
            {
                sum2=sum2+z;
            }
        }
        if(y==sum2)
        {
            x++;
        }
        sum1=0;
        sum2=0;
    }
    printf("%d",x);
}