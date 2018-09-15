#include<stdio.h>

int main()
{
    int x,y,z,t;
    int check;
    int check1,check2;
    int res;

    for(y=5001;y<6000;y=y+2)
    {
        check=0;
        for(z=2;z<y;z++)
        {
            if(y%z==0)
            {
                check=1;
            }
        }
        if(check==1)
        { 
            check2=0; 
            for(z=2;z<y;z++)
            {
                check1=0;
                for(t=2;t<z;t++)
                {
                    if(z%t==0)
                    {
                        check1=1;
                    }
                }
                if(check1==0)
                {  
                    for(t=1;t<y;t++)
                    {
                        res=z+2*(t*t);
                        if(res==y)
                        {
                            check2=1;
                        }
                    }
                }
            }
            if(check2==0)
            {
                printf("%d  ",y);
            }
        }
    }
}