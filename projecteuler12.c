#include<stdio.h>

int main()
{
   /* int x=0,y,z;
    int sum=0;
    for(y=1;;y++)
    {
        for(z=1;z<=y;z++)
        {
            sum=sum+z;
        }
        for(z=1;z<=sum;z++)
        {
            if(sum%z==0)
            { x++;}
        }
        if(x>500)
        { break;}
        x=0;
        sum=0;
    }

    printf("%d",sum);
    */
        
    long double x,y,z;
    long double sum=0;
    long double check;
    
    for(y=1;;y++)
    {   

        for(z=1;z<=y;z++)
        {
            sum=sum+z;
        }
        for(z=1;z<=sum;z++)
        {
            check=sum/z;
            if(check==(int)(sum/z))
            {
                x++;
            }
        }

        if(x>200.0)
        {
            break;
        }
        
        x=0;
        sum=0;

    }

    printf("%Lf",sum);
}