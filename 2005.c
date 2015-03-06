#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int b[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    int y,m,d;
    int result;
    int i;
    while(scanf("%d/%d/%d",&y,&m,&d)!=EOF)
    {
        result=0;
        if(y%4==0&&(y%100!=0||y%400==0))
        {
            for(i=0;i<m;i++)
                result+=b[i];
            result+=d;
            printf("%d\n",result);
        }
        else
        {
            for(i=0;i<m;i++)
                result+=a[i];
            result+=d;
            printf("%d\n",result);
        }
    }
    return 0;
}
