#include<stdio.h>

int main()
{
    int N;
    printf("enter the number 'N'\n");
    scanf("%d",&N);
    int a,b,c;
    int n;
    int y;
    int count=0;
    int x;
    int count1=0;
    int count2=0;
    for(a=1;a<=N;a++)
    {
        for(b=1;b<=N;b++)
        {
            for(c=1;c<=N;c++)
            {
                for(y=1;y<=N;y++)
                {
                   for(n=0;n<=N;n++)
                   {
                        x=((a*(n*n))+(b*n)+(c)+(n*n*n))*n;
                        if(x%y==0)
                        {
                            count++;
                        }
                   }
                   if(count==N+1)
                   {
                       count1=y;
                   }
                   count=0;
                }
                count2=count2+count1;
            }
        }
    }
    printf("%d",count2);
}