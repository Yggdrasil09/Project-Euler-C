#include<stdio.h>

int main()
{
    int n;
    printf("enter the number of rows to be entered in the triangle\n");
    scanf("%d",&n);
    int m;
    if(n%2==0)
    {
        m=(n/2)*(n+1);
    }
    else
    {
        m=((n+1)/2)*n;
    }
    printf("the number of elements in the triangle are %d \n",m);
    int x[m];
    printf("enter the %d elements in the array\n",m);
    int y;
    for(y=0;y<m;y++)
    {
        scanf("%d",&x[y]);
    }

    int max[n];
    max[0]=x[0];
    int check;
    
    if(x[1]>x[2])
    {
        max[1]=x[1];
        check=1;
    }
    else
    {
        max[1]=x[2];
        check=2;
    }

    for(y=3;y<=n;y++)
    {
        check=check+y-1;
        if(x[check]>x[check+1])
        {
            max[y-1]=x[check];
            check=check;
        }
        else
        {
            max[y-1]=x[check+1];
            check=check+1;
        }

    }

    int sum=0;

    for(y=0;y<n;y++)
    {
        sum=sum+max[y];
    }
    printf("%d ",sum);
}