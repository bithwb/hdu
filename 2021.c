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
            //100Ԫ������
            count+=m/100;
            m=m%100;
            //50Ԫ������
            count+=m/50;
            m=m%50;
            //10Ԫ������
            count+=m/10;
            m=m%10;
            //5Ԫ������
            count+=m/5;
            m=m%5;
            //2Ԫ������
            count+=m/2;
            m=m%2;
            //1Ԫ������
            count+=m;

        }
        printf("%d\n",count);
    }
    return 0;
}
