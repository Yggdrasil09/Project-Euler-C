#include<stdio.h>

int main()
{
    long double x=3,y,z=2;
    long double x1,z1;
    long double t,t1,u,u1;
    int count=0;

    for(y=1;y<=1000;y++)
    {
        x1=x+(2*z);
        z1=x+z;
        t1=0;
        u1=0;
        for(t=1;t<=x1;t=t*10)
        {
            t1++;
        }
        for(u=1;u<=z1;u=u*10)
        {
            u1++;
        }
        if(t1>u1)
        {
            count++;
        }
        x=x1;
        z=z1;
    }

    printf("the total numberes are %d ",count);

}