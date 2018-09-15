#include<stdio.h>

int main()
{
    int x,y,z,t,s,v,w,flag1,flag2,count1,count2;

for(y=3000;y<4000;y++)
{ flag1=0;
  for(z=2;z<y;z++)
     { x=y%z;
       if(x==0)
        {flag1=1;
          }
       }
  if(flag1==0)
  {  count1=0;
     count2=0;
     for(t=10;y>t;t=t*10)
       {  s=y/t;
          count2=count2+1;
          flag2=0;
          for(v=2;v<s;v++)
            { w=s%v;
              if(w==0) 
                { flag2=1;}
              }
          if(flag2==0)
            {count1=count1+1;
              }
          
         }
     if(count1==count2)
       {printf("%d\t",y);
         }
     }

 }
}