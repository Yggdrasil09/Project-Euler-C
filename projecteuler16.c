#include<stdio.h>
#include<math.h>

int main()
{
    double x=1;
    int y;

    for(y=0;y<1000;y++)
    {
        x=x*2;
    }

    int count=0;
    double copy=x;

    while(copy>=1.0)
    {
        copy=copy/10;
        count++;
    }
    
    double mult=10;
    int sum=0;
    int result;

    for(y=1;y<count;y++)
    {
        result=fmod(x,mult)/(mult/10);
        sum=sum+result;
        mult=mult*10;
    }

    printf("%d",sum);
}