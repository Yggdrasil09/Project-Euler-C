#include<stdio.h>

int main()
{
    int x1,x2,x3;
    int y,z,t;
    int count=0;
    int count1=0;
    int res;

    for(y=10;y<1000;y++)
    {
        for(x1=1;x1<y;x1++)
        {
            for(x2=1;x2<x1;x2++)
            {
                for(x3=1;x3<x2;x3++)
                {
                    if(x1+x2+x3==y)
                    {
                      t=(x3*x3)+(x2*x2);
                      z=x1*x1;
                      if(t==z)
                      {
                          count++;                              //solved using brute force
                      }  
                    }
                }
            }
        }
        if(count>count1)
        {
            count1=count;
            res=y;
        }
        count=0;
    }

    printf("%d number is %d",count1,res);

}