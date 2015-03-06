#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i,j,x,y,t,m;
    while(1)
    {t=0;
        scanf("%d %d",&x,&y);
        if(x==0&&y==0)
            break;
        else
        {
            for(i=x;i<=y;i++)
              {
                  m=i*i+i+41;
                  for(j=2;j<sqrt(m);j++)
                  {
                      if(m%j==0)
                        t++;
                  }

              }
            if(t==0)
               printf("OK\n");
            else
               printf("Sorry\n");
        }
    }
}
