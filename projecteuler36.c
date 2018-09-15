#include<stdio.h>

int binary(int);

int main()
{
    int x,y,z;
    int rev=0,rem,rep;
    int rev1=0,rem1,rep1;
    int t;

    for(y=1;y<1000;y++)
    {
        rep=y;
        while(rep!=0)
        {
            rem=rep%10;
            rev=rev*10+rem;
            rep=rep/10;
        }
        rep1=binary(y);
        t=binary(y);
        while(rep1!=0)
        {
            rem1=rep1%10;
            rev1=rev1*10+rem1;
            rep1=rep1/10;
        }
        if(y==rev&&rev1==t)
        {
            printf("%d  ",y);
        }
        rev=0;
        rev1=0;
    }

}

int binary(int x)
{
    int y=0;
    int z=1;
   while(x!=0)
   {
       y=y+(x%2)*z;
       x=x/2;
       z=z*10;
   } 
   return y;
}