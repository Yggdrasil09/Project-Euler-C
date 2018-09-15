#include<stdio.h>
#include<math.h>

int main()
{
    int x,y,z;
    int a,b;
    int check=0;
    int count=0;
    int count1=0;
    int get[2];

    for(a=-999;a<999;a++)
    {
        for(b=-1000;b<=1000;b++)
        {
            for(y=0;;y++)
            {
                check=0;
                x=(y*y)+(a*y)+b;
                for(z=2;z<x;z++)
                {
                    if(x%z==0)
                    {
                        check=1;
                    }
                }
                if(check==0)
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            if(count>count1)
            {
                count1=count;
                get[0]=a;
                get[1]=b;
            }
            count=0;
        }
    }

    printf("%d %d %d",count1,get[0],get[1]);

    printf("\nthe produbt of numbers is %d",get[1]*get[0]);
       
}