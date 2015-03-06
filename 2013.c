#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int day,i;
    int m;
    while(scanf("%d",&day)!=EOF)
    {
        m=1;
        for(i=day;i>1;i--)
            {
                m=m+1;
                m*=2;
            }
        printf("%d\n",m);
    }
    return 0;
}
