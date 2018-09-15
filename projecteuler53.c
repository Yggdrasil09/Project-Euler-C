#include<stdio.h>

double fact(int );

int main()
{
    double x;
    int y,z;
    int count=0;

    for(y=1;y<=100;y++)
    {
        for(z=1;z<y;z++)
        {
            x=(fact(y)/(fact(y-z)*fact(z)));
            if(x>1000000)
            {
                count++;
            }
        }
    }

    printf("the value of count is %d",count);

}

double fact(int x)
{
    double y=1;

    for(;x>=1;x--)
    {
        y=y*x;
    }

    return y;
}