#include<stdio.h>

int main()
{
    int x[100][50];
    int y,z;
    for(y=0;y<100;y++)
    {
        for(z=0;z<100;z++)
        {
            scanf("%d",&x[y][z]);
        }
    }
    
    int u[50];
    int sum=0;

    for(y=0;y<50;y++)
    {
        for(z=0;z<100;z++)
        {
            sum=sum+x[y][z];
        }
        u[y]=sum;
        sum=0;

    }

    int rep;

    for(y=49;y>=0;y--)
    {
        if(y!=0)
        {
            rep=u[y];
            u[y]=u[y]%10;
            u[y+1]=u[y+1]+(rep/10); 

        }
        else
        {
            ;
        }
    }

    printf("the number is given");

    //divide the 50 digit number in multiples of 10
    //add the 10 digit number and get the add on for the first digit
    //add the add on to the next coming number

}