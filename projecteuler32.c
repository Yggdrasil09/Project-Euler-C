#include<stdio.h>

int main()
{
    int x[9]={1,2,3,4,5,6,7,8,9};
    int copy[16];
    int y,z;
    int t,u,v,w;
    int c,g=0;
    int count=0,check=0;;

    for(y=0;y<16;y++)
    {
        copy[y]=0;
    }

    for(y=1;y<1000;y++)
    {
        for(z=1;z<1000;z++)
        {
            c=0;
            t=z*y;
            for(u=1;u<z;u=u*10)
            {
                v=(z%(u*10))/u;
                copy[c]=v;
                c++;
            }
            for(u=1;u<y;u=u*10)
            {
                v=(y%(u*10))/u;
                copy[c]=v;
                c++;
            }
            for(u=1;u<t;u=u*10)
            {
                v=(t%(u*10))/u;
                copy[c]=v;
                c++;
            }
            for(u=0;u<9;u++)
            {
                for(w=0;w<16;w++)
                {
                    if(copy[w]==x[u])
                    {
                        count++;
                        break;
                    }
                }
            }
            if(count==9)
            {
                g=0;
                for(u=0;u<9;u++)
                {
                    for(w=0;w<16;w++)
                    {
                        if(x[u]==copy[w])
                        {
                            check++;
                        }
                    }
                    if(check!=1)
                    {
                        g=0;
                        break;
                    }
                    check=0;  
                }
                if(g==0)
                {
                    printf("%d %d %d\t",y,z,t);
                }
            }
            count=0;
            for(u=0;u<16;u++)
            {
                copy[u]=0;
            }
        }
    }
}