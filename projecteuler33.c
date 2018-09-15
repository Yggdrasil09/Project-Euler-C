#include<stdio.h>

int main()
{
    int x,y,z;
    float t,s,t1,s1;

    for(y=10;y<100;y++)
    {
        for(z=10;z<100;z++)
        {
            t=y/10;
            t1=y%10;
            s=z%10;
            s1=z/10;
            if(z%10!=0&&y%10!=0&&y<z)
            {
                if((float)y/z==t/s&&t1==s1)
                {
                 printf("%d %d\t",y,z);
                }
            }
        }
    }
}