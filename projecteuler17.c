#include<stdio.h>
#include<string.h>

int main()
{
    char units[19][10]={"one","two","three","four","five","six","seven","eight","nine","ten",
    "eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    char tens[9][10]={"ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    char thou[10]={"thousand"};

    int y;
    int sum=0;
    int rep1,rep2,rep3,rep4;
    printf("%d",strlen(tens[1]));

    for(y=1;y<1000;y++)
    {
        if(y<100)
        {
            if(y<20)
            {
                sum=sum+strlen(units[y-1]); 
            }
            if(y>=20)
            {
                if(y%10==0)
                {
                    sum=sum+strlen(tens[(y/10)-1]);
                }
                else
                {
                    rep1=y/10;
                    rep2=y%10;
                    sum=sum+strlen(tens[rep1-1]);
                    sum=sum+strlen(units[rep2-1]);
                }
            }
        }
        else
        {
            if(y%100==0)
            {
                rep3=y/100;
                sum=sum+strlen(units[rep3-1])+7;
            }
            else
            {
                rep3=y/100;
                rep4=y%100;
                sum=sum+strlen(units[rep3-1])+7+3;
                if(rep4<20)
                {
                    sum=sum+strlen(units[rep4-1]); 
                }
                if(rep4>=20)
                {
                    if(rep4%10==0)
                    {
                        sum=sum+strlen(tens[(rep4/10)-1]);
                    }
                    else
                    {
                        rep1=rep4/10;
                        rep2=rep4%10;
                        sum=sum+strlen(tens[rep1-1]);
                        sum=sum+strlen(units[rep2-1]);
                    }
                }

            }

        }

    }

    sum=sum+strlen(thou);

    printf("%d",sum);
}