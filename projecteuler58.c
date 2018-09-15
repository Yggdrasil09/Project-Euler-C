#include<stdio.h>

int main()
{
    long int x=1,y=1,z=2;
    long int t,check;
    long int count=0;
    float fract=1;
    long int dig=0;

    while(fract>0.62)
    {
        for(x=0;x<=3;x++)
        {
            dig++;
            y=y+z;
            check=0;
            for(t=2;t<y;t++)
            {
                if(y%t==0)
                {
                    check=1;
                }
            }
            if(check==0)
            {
                count++;
            }
        }
        z=z+2;
        fract=(float)count/dig;
        printf("%f ",fract);
    }

    printf("the value is %ld",y);

}