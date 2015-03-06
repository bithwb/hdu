#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,i,j;
    int a[60];
    memset(a,0,sizeof(a));
    //前4年每年牛的数目是以1为等差的数列
    for(i=0;i<5;i++)
            a[i]=i;
    //后面牛的数目是前一年的牛的数目加上4年前的牛的数目
    //第n年的牛，是前一年牛的头数，加上生下的头数，也就是能生产的母牛头数（n-3）
    for(i=5;i<60;i++)
        a[i]=a[i-1]+a[i-3];
    while(scanf("%d",&n)!=EOF)
    {if(n!=0)
        printf("%d\n",a[n]);
     else
        break;
    }
    return 0;
}
