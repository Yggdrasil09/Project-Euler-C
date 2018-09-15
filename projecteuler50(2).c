#include<stdio.h>

int prime(int);

int main()
{
    int n;
    printf("enter the upper limit in the sum\n");
    scanf("%d",&n);

    int y,z;
    int sum=0;
    int res1,res=0,res2;

   for(y=2;y<20;y++)
   {
       if(prime(y))
       {    
            for(z=y;z<n;z++)
            {
                if(prime(z))
                {
                    sum=sum+z;
                    if(prime(sum))
                    {        
                        if(sum<n)
                        {
                            res1=sum;
                            if(res1>res)
                            {
                                res=res1;
                                res2=y;
                            }
                        }
                        else
                        {
                            break;
                        }
                    }
                }   
            }
            sum=0;
       }
   }

   printf("%d %d",res,res2);

}

int prime(int x)
{
    int check=0;
    int y;

    for(y=2;y<x;y++)
    {
        if(x%y==0)
        {
            check=1;
        }
    }
    if(check==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}