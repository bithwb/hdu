#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i,j,n,a,max,min,temp;
    double res;
    while(scanf("%d",&n)!=EOF)
    {  scanf("%d",&a);
         max=a;
         min=a;
         temp=a;
        for(i=1;i<n;i++)
        {
          scanf("%d",&a);
          if(a>max)
             max=a;
          if(a<min)
            min=a;
            temp+=a;
        }
        temp=temp-max-min;
        res=(double)temp/(n-2);
        printf("%.2lf\n",res);
    }
 return 0;
}
