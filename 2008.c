#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,a,b,c,i;
    float m;
    while(scanf("%d",&n)!=EOF)
    { a=0;b=0;c=0;
        if(n==0)
            break;
        else
        {
            for(i=0;i<n;i++)
            {
                scanf("%f",&m);
                if(m<0)
                  a++;
                else if(m==0)
                  b++;
                else
                  c++;
            }
        }
        printf("%d %d %d\n",a,b,c);
    }
    return 0;
}
