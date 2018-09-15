#include<stdio.h>

int main()
{
    int x1,x2,x3,y1,y2,y3,z;

    for(y1=1;y1<1000;y1++)
    {
        if(y1%2==0)
        {
            x1=(y1+1)*y1/2;
        }
        else
        {
            x1=(y1+1)/2*y1;
        }
        for(y2=1;y2<y1;y2++)
        {
            if(y2%2==0)
            {
                x2=y2/2*(3*y2-1);
            }
            else
            {
                x2=(3*y2-1)/2*y2;
            }
            for(y3=1;y3<y2;y3++)
            {
                x3=y3*(2*y3-1);
                if(x1==x2&&x2==x3)
                {
                    printf("T -%d P-%d H-%d\t",y1,y2,y3);
                }
            }
        }

    }


}