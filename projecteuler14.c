#include<stdio.h>

int main()
{
    int check=0;
    int check1[2];
    check1[0]=0;
    int  y;
    int rep;
    int copy=0;

    for(y=1;y<=1100;y++)
    {   
        rep=y;
        while(copy==0)
        {
            if(rep==1)
            {
                check++;
                copy=1;
            }
            else if(rep%2==0)
            {
                rep=rep/2;
                check++;
            }
            else
            {
                rep=3*rep+1;
                check++;
            }

        }
        if(check1[0]<check)
        {
            check1[0]=check;
            check1[1]=y;
        }
        check=0;
        copy=0;

    }
    printf("%d %d",check1[0],check1[1]);

}