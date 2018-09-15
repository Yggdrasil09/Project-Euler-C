#include<stdio.h>

int main()
{
    int n;

    printf("enter the order of spiral of form nxn\n");
    scanf("%d",&n);

    int x[n*n];
    int y;
    int sum=0;

    for(y=0;y<n*n;y++)
    {
        x[y]=y+1;
    }

    int add=2;
    y=0;
    int count=0;

    while(y<n*n)
    {
        sum=sum+x[y];
        y=y+add;
        count++;
        if(count==4)
        {
            add=add+2;
            count=0;
        }    
    }

    printf("%d",sum);
    
}