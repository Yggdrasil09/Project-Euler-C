#include<stdio.h>

int main()
{
    int x[10]={0,1,2,3,4,5,6,7,8,9};
    int y,b=0;
    int t,z,copy;
    int prime[8]={1,2,3,5,7,11,13,17};
    int count=0;

    for(y=0;b<10*(9);y++)
    {
        t=x[y];
        x[y]=x[y+1];
        x[y+1]=t;
        for(z=1;z<=7;z++)
        {
            copy=(x[z]*100)+(x[z+1]*10)+x[z+2];
            if(copy%(prime[z])==0)
            {
                count++;
            }
        }
        if(count==7)
        {
            for(z=0;z<10;z++)
            {
                printf("%d",x[z]);
            }
            printf("\n");
        }
        count=0;
        if(y==8)
        {
            y=-1;
        }
        b++;
    }
}