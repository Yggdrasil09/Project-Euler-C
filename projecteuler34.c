#include<stdio.h>

int fact(int);

int main()
{
    int x,z;
    int sum=0;
    long int y;

    for(y=3;y<=30000;y++)
    {
        for(z=1;z<y;z=z*10)
        {
            x=(y%(z*10))/z;
            sum=sum+fact(x);
        }
        if(y==sum)
        {
            printf("%ld ",y);
        }
        sum=0;
    }
}

int fact(int x)
{
    int y=1;

    for(;x>=1;x--)
    {
        y=y*x;
    }
    
    return y;
}