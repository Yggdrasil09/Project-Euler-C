#include<stdio.h>
#include<math.h>

int main()
{
    long int y,z;
    long int rep;
    double t,x;
    int count=0;
    int check=0;
    int count1=0;

    for(y=1;y<=10000;y++)
    {
        t=y;
        label:
        x=0;
        for(z=1;z<=(int)t;z=z*10)
        {
            rep=(int)(fmod(t,z*10)/z);
            if(rep==0)
            {
                x=(x)*10;
            }
            else
            {
                x=(x)*10+rep;
            }
        }
        if(x!=t)
        {
            t=x+t;
            count++;
            if(count<49)
            {
                goto label;
            }
            else
            {
                check=1;
            }
        }
        if(check==1)
        {
            printf("%ld ",y);
            count1++;
        }
        count=0;
        check=0;
    }

    printf("\n the number is %d \n",count1);
}