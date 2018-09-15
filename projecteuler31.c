#include<stdio.h>

int main()
{
    int x[8];
    int y;
    int count=0;
    int a,b,c,d,e,f,g;

    printf("enter the currency in the array in terms of pence\n");

    for(y=0;y<8;y++)
    {
        scanf("%d",&x[y]);
    }
    
    int n;

    printf("enter the currency to be made in terms of pence\n");
    scanf("%d",&n);

    for (int a = n; a >= 0; a -= x[7]) {
    for (int b = a; b >= 0; b -= x[6]) {
        for (int c = b; c >= 0; c -= x[5]) {
            for (int d = c; d >= 0; d -= x[4]) {
                for (int e = d; e >= 0; e -= x[3]) {
                    for (int f = e; f >= 0; f -= x[2]) {
                        for (int g = f; g >= 0; g -= x[1]) {
                            count++;
                        }
                    }
                }
            }
        }
    }
}

printf("the number of ways are %d",count);

}

//solved the problem using brute force 

//but must be solved with dynamic programming
