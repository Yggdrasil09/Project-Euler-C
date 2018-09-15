#include<stdio.h>

int prime(int);

int main()
{
    int n;

    printf("enter the upper limit for the sum\n");
    scanf("%d",&n);

    int x,y,z;
    int sum=0;
    int res;

    for(y=2;y<=n;y++)
    {
        if(prime(y))
        {
            sum=sum+y;
            if(prime(sum))
            {
                if(sum<=n)
                {
                    res=sum;
                }
            }
        }
    }
    printf("%d",res);
}

int prime(int x)
{
    int check=0;
    int y;

    for(y=2;y<x;y++)
    {
        if(x%y==0)
        {
            check=1;
        }
    }
    if(check==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}