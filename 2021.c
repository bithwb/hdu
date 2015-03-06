#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    int n,m,i,j;
    int count=0;
    while(scanf("%d",&n)!=EOF&&n)
    { count=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&m);
            //100元的张数
            count+=m/100;
            m=m%100;
            //50元的张数
            count+=m/50;
            m=m%50;
            //10元的张数
            count+=m/10;
            m=m%10;
            //5元的张数
            count+=m/5;
            m=m%5;
            //2元的张数
            count+=m/2;
            m=m%2;
            //1元的张数
            count+=m;

        }
        printf("%d\n",count);
    }
    return 0;
}
