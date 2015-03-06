#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n,m,i;
    double result;
    double a;
    while(scanf("%d %d",&n,&m)!=EOF)
    {   a=(double)n;
        result=a;
        for(i=1;i<m;i++)
        {
            result+=sqrt(a);
            a=sqrt(a);
        }
        printf("%.2lf\n",result);
    }
    return 0;
}
