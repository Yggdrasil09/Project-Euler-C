#include<stdio.h>

int main()
{
    int n;

    printf("enter the number of digits in the number\n");
    printf("the number should be less than 5\n");
    scanf("%d",&n);

    int x=1,y,z;
    int check=0;
    int dmain[5]={1,2,3,4,5};
    int t,s,u;
    int count=0,count1=0;

    for(y=1;y<=n;y++)
    {
        x=x*10;
    }
    for(y=x/10;y<x;y++)
    {
        check=0;
        for(z=2;z<y;z++)
        {
            if(y%z==0)
            {
                check=1;
            }
        }
        if(check==0)
        {
            for(t=0;t<n;t++)
            {
                for(s=1;s<=y;s=s*10)
                {
                    u=(y%(s*10))/s;
                    if(dmain[t]==u)
                    {
                        count++;
                    }
                }
                if(count==1)
                {
                    count1++;
                }
                count=0;
            }  
            if(count1==n)
            {
                printf("%d ",y);
            }
            count1=0;          
        }
    }
}