#include<stdio.h>

int main()
{
    int dmain[9]={1,2,3,4,5,6,7,8,9};
    int x1,x2,x3;
    int y,z;
    int t,s,c;
    int copy[15];
    int check=0,check1=0;
    int g=0;

    for(y=0;y<15;y++)
    {
        copy[y]=0;
    }

    for(y=0;y<10000;y++)
    {
        c=0;
        x1=y*1;
        x2=y*2;
        x3=y*3;
        for(z=1;z<x1;z=z*10)
        {
            t=(x1%(z*10))/z;
            copy[c]=t;
            c++;
        }
        for(z=1;z<x2;z=z*10)
        {
            t=(x2%(z*10))/z;
            copy[c]=t;
            c++;
        }
        for(z=1;z<x3;z=z*10)
        {
            t=(x3%(z*10))/z;
            copy[c]=t;
            c++;
        }
        for(z=0;z<9;z++)
        {
            for(s=0;s<c;s++)
            {
                if(dmain[z]==copy[s])
                {
                    check++;
                    break;
                }
            }
        }
        if(check==9)
        {
            for(z=0;z<9;z++)
            {
                g=0;
                for(s=0;s<c;s++)
                {
                    if(dmain[z]==copy[s])
                    {
                        check1++;
                    }
                }
                if(check1>1)
                {
                    g=1;
                }
                check1=0;
            }
            if(g==0)
            {
                printf("%d ",y);
            }
        }
        check=0;
        for(z=0;z<15;z++)
        {
            copy[z]=0;
        }
    }
}