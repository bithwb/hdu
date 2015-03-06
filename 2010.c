#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<math.h>

int judge(int i)
{
    int a,b,c,temp;
    a=i/100;
    b=(i-a*100)/10;
    c=i-a*100-b*10;
    temp=a*a*a+b*b*b+c*c*c;
   // printf("%d---%d\n",i,temp);
    if(temp==i)
        return 1;
    else
        return 0;
}
int main()
{
    int a[1000];
    int m,n,i,k;
    while(scanf("%d %d",&m,&n)!=EOF)
    {  k=0;
        memset(a,0,sizeof(a));
        for(i=m;i<=n;i++)
        {
            if(judge(i))
            {
                a[k++]=i;
            }
        }
        if(k==0)
            printf("no\n");
        else
        {   printf("%d",a[0]);
            for(i=1;i<k;i++)
                printf(" %d",a[i]);
            printf("\n");
        }
    }
    return 0;
}
