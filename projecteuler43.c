#include<stdio.h>
#include<math.h>

int main()
{
    double y;
    double z;
    int x[10]={0,1,2,3,4,5,6,7,8,9};
    int t,u,w;
    int count=0;
    int check=0;

    for(z=1;z<y;z=z*10)
    {
        ;
    }
    double z1=z/10;

    for(y=1000000000;y<10000000000;y++)
    {
        for(t=0;t<10;t++)
        {
            for(u=1;u<y;u=u*10)
            {
                w=fmod(y,u*10)/u;
                if(x[t]==(int)w)
                {
                    count++;
                }
            }
            if(count==1)
            {
                check++;
            }
            count=0;
        }
        if(check==10)
        {
            printf("%.0f",y);
        }
        check=0;
    }
}