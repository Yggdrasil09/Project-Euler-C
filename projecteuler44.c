#include<stdio.h>

void main()
{

long double  x1,x2,x3,y,z,t;
for(y=1;y<1000;y++)
 {  x1=(y*(3*y-1))/2;
    for(z=1;z<1000;z++)
     {  x2=(z*(3*z-1))/2;
        for(t=1;t<1000;t++)
          {  x3=(t*(3*t-1))/2;
             if((x1+x2)==x3&&((x2-x1==x3)||(x1-x2==x3)))
               {  printf("%Lf--%Lf\t",x1,x2);
                 }
            }
         }
    }
//&&((x2-x1==x3)||(x1-x2==x3)

    
         
  

}
