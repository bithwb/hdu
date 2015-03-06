#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);
}
int main()
{
    int n,a,b,k;
    int i;
    while(scanf("%d",&n)!=EOF)
    {
          scanf("%d",&b);
          for(i=1;i<n;++i)
          {
                  scanf("%d",&a);
                  k=gcd(b,a);
                  b=b/k*a;
          }
          printf("%d\n",b);
    }
    return 0;
}
