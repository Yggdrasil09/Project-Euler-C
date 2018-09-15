#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int arr[6]={0};

int isTriangle(int);
int isSquare(int);
int isPentagonal(int);
int isHexagonal(int);
int isHeptagonal(int);
int isOctagonal(int);

int isAnyPolygonal(int);

int isAnySquare(int,int,int,int,int,int);
int isAnyTriangle(int,int,int,int,int,int);
int isAnyPentagonal(int,int,int,int,int,int);
int isAnyHexagonal(int,int,int,int,int,int);
int isAnyHeptagonal(int,int,int,int,int,int);
int isAnyOctagonal(int,int,int,int,int,int);

int main()
{
      int i,a,b,c,e,d,f,flag=0;
      for(a=1000;a<10000;a++)
            if(isAnyPolygonal(a))
                  for(b=1000;b<10000;b++)
                        if(a%100==(b/100) && isAnyPolygonal(b))
                              for(c=1000;c<10000;c++)
                                    if(b%100==(c/100) && isAnyPolygonal(c))
                                          for(d=1000;d<10000;d++)
                                                if(c%100==(d/100) && isAnyPolygonal(d))
                                                      for(e=1000;e<10000;e++)
                                                            if(d%100==(e/100) && isAnyPolygonal(e))
                                                                  for(f=1000;f<10000;f++)
                                                                        if(e%100==(f/100) && f%100==(a/100) && isAnyPolygonal(f))
                                                                        {
                                                                              flag=0;
                                                                              for(i=0;i<6;i++)
                                                                                    arr[i]=0;
                                                                              //printf("%d %d %d %d %d %d\n",a,b,c,d,e,f);

                                                                              isAnyTriangle(a,b,c,d,e,f);
                                                                              isAnySquare(a,b,c,d,e,f);
                                                                              isAnyPentagonal(a,b,c,d,e,f);
                                                                              isAnyHexagonal(a,b,c,d,e,f);
                                                                              isAnyHeptagonal(a,b,c,d,e,f);
                                                                              isAnyOctagonal(a,b,c,d,e,f);

                                                                              for(i=0;i<6;i++)
                                                                                    flag+=arr[i];

                                                                              if(flag==6)
                                                                              {
                                                                                    printf("%d %d %d %d %d %d",a,b,c,d,e,f);
                                                                                    printf("  sum = %d\n",(a+b+c+e+d+f));
                                                                                    exit(1);
                                                                              }
                                                                        }

      return 0;
}


int isAnyPolygonal(int n)
{
      if(isTriangle(n) || isSquare(n) || isPentagonal(n) || isHexagonal(n) || isHeptagonal(n) || isOctagonal(n))
            return 1;
      return 0;
}

int isAnyTriangle(int a,int b,int c,int d,int e,int f)
{
      if(isTriangle(a))
      {
            arr[0]=1;
            return 1;
      }
      if(isTriangle(b))
      {
            arr[1]=1;
            return 1;
      }
      if(isTriangle(c))
      {
            arr[2]=1;
            return 1;
      }
      if(isTriangle(d))
      {
            arr[3]=1;
            return 1;
      }
      if(isTriangle(e))
      {
            arr[4]=1;
            return 1;
      }
      if(isTriangle(f))
      {
            arr[5]=1;
            return 1;
      }

      return 0;
}

int isAnySquare(int a,int b,int c,int d,int e,int f)
{
      if(isSquare(a))
      {
            arr[0]=1;
            return 1;
      }
      if(isSquare(b))
      {
            arr[1]=1;
            return 1;
      }
      if(isSquare(c))
      {
            arr[2]=1;
            return 1;
      }
      if(isSquare(d))
      {
            arr[3]=1;
            return 1;
      }
      if(isSquare(e))
      {
            arr[4]=1;
            return 1;
      }
      if(isSquare(f))
      {
            arr[5]=1;
            return 1;
      }

      return 0;
}

int isAnyPentagonal(int a,int b,int c,int d,int e,int f)
{
      if(isPentagonal(a))
      {
            arr[0]=1;
            return 1;
      }
      if(isPentagonal(b))
      {
            arr[1]=1;
            return 1;
      }
      if(isPentagonal(c))
      {
            arr[2]=1;
            return 1;
      }
      if(isPentagonal(d))
      {
            arr[3]=1;
            return 1;
      }
      if(isPentagonal(e))
      {
            arr[4]=1;
            return 1;
      }
      if(isPentagonal(f))
      {
            arr[5]=1;
            return 1;
      }

      return 0;
}

int isAnyHexagonal(int a,int b,int c,int d,int e,int f)
{
      if(isHexagonal(a))
      {
            arr[0]=1;
            return 1;
      }
      if(isHexagonal(b))
      {
            arr[1]=1;
            return 1;
      }
      if(isHexagonal(c))
      {
            arr[2]=1;
            return 1;
      }
      if(isHexagonal(d))
      {
            arr[3]=1;
            return 1;
      }
      if(isHexagonal(e))
      {
            arr[4]=1;
            return 1;
      }
      if(isHexagonal(f))
      {
            arr[5]=1;
            return 1;
      }

      return 0;
}

int isAnyHeptagonal(int a,int b,int c,int d,int e,int f)
{
      if(isHeptagonal(a))
      {
            arr[0]=1;
            return 1;
      }
      if(isHeptagonal(b))
      {
            arr[1]=1;
            return 1;
      }
      if(isHeptagonal(c))
      {
            arr[2]=1;
            return 1;
      }
      if(isHeptagonal(d))
      {
            arr[3]=1;
            return 1;
      }
      if(isHeptagonal(e))
      {
            arr[4]=1;
            return 1;
      }
      if(isHeptagonal(f))
      {
            arr[5]=1;
            return 1;
      }

      return 0;
}

int isAnyOctagonal(int a,int b,int c,int d,int e,int f)
{
      if(isOctagonal(a))
      {
            arr[0]=1;
            return 1;
      }
      if(isOctagonal(b))
      {
            arr[1]=1;
            return 1;
      }
      if(isOctagonal(c))
      {
            arr[2]=1;
            return 1;
      }
      if(isOctagonal(d))
      {
            arr[3]=1;
            return 1;
      }
      if(isOctagonal(e))
      {
            arr[4]=1;
            return 1;
      }
      if(isOctagonal(f))
      {
            arr[5]=1;
            return 1;
      }

      return 0;
}


int isTriangle(int n)
{
      int i;
      for(i=0;i<n;i++)
            if(n*2==(i*(i+1)))
                  return 1;
      return 0;
}

int isSquare(int n)
{
      if((int)sqrt(n)==sqrt(n))
            return 1;
        return 0;
}


int isPentagonal(int n)
{
        int i;
        for(i=0;i<n;i++)
                if(n*2==(i*(3*i-1)))
                        return 1;
        return 0;
}

int isHexagonal(int n)
{
        int i;
        for(i=0;i<n;i++)
                if(n==(i*(2*i-1)))
                        return 1;
        return 0;
}

int isHeptagonal(int n)
{
        int i;
        for(i=0;i<n;i++)
                if(n*2==(i*(5*i-3)))
                        return 1;
        return 0;
}

int isOctagonal(int n)
{
        int i;
        for(i=0;i<n;i++)
                if(n==(i*(3*i-2)))
                        return 1;
        return 0;
}