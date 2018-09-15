#include<stdio.h>

int main()
{
    long int y;
    int z,t,u,v;
    long int x;
    int str[7];
    int copy[7];

    for(y=0;y<7;y++)
    {
        str[y]=0;
    }

    int a,b;
    int check=0;
    int count=0;
    int count1=0;

    for(y=1000;y<1000000;y++)
    {
        for(z=1,t=0;z<=y;z=z*10,t++)
        {
            str[t]=(y%(z*10))/z;
        }
        for(z=2;z<=6;z++)
        {
            x=y*z;
            for(u=1,v=0;u<=y;u=u*10,v++)
            {
                copy[v]=(x%(u*10))/u;
            }
            if(t==v)
            {
                for(a=0;a<t;a++)
                {
                    check=0;
                    for(b=0;b<v;b++)
                    {
                        if(copy[a]==str[b])
                        {
                            check++;
                        }
                    }
                    if(check==1)
                    {
                        count++;
                    }
                }
                if(count==t)
                {
                    count1++;
                }
                count=0;
            }
        }
        if(count1==5)
        {
            break;
        }
        count1=0;
    }

    printf(" the value is %ld",y);
}
