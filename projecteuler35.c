#include<stdio.h>

int main()
{
    int x,y,z;
    int check;
    int count=0;
    int rep,rep1,rep2;
    int check1=0,t;
    int count1=0;
    int count2=0;

    for(y=2;y<=100;y++)
    {
        rep=y;
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
            for(z=1;;z=z*10)
            {
                if(z>y)
                {
                    break;
                }
                count++;
            }
            for(x=1;x<count;x++)
            {
               rep1=rep%(z/10);
               rep2=rep/(z/10);
               rep=rep1*10+rep2;
               check1=0;
               for(t=2;t<rep;t++)
               {
                   if(rep%t==0)
                   {
                       check1=1;
                   }
               }
               if(check1==0)
               {
                   count1++;
               }    
            }
            if(count-1==count1)
            {
                count2++;
            }
            count=0;
            count1=0;
        }
    }
    printf("%d",count2);
}
