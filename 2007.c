#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m,n,i,t;
    int re1,re2;
    while(scanf("%d %d",&m,&n)!=EOF)
    { re1=0;
      re2=0;
      if(m<n){
        for(i=m;i<=n;i++)
        {
            if(i%2==0)
            {
                re1+=i*i;
            }
            else
            {
                re2+=i*i*i;
            }
        }
      }
      else{
        t=m;
        m=n;
        n=t;
        for(i=m;i<=n;i++)
        {
            if(i%2==0)
            {
                re1+=i*i;
            }
            else
            {
                re2+=i*i*i;
            }
        }
      }
        printf("%d %d\n",re1,re2);
    }
    return 0;
}
