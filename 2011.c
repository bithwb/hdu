#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m,n,i;
    double temp;
    scanf("%d",&m);
    while(m--)
    {  temp=1;
        scanf("%d",&n);
        for(i=1;i<n;i++)
        { if(i%2==0)
           temp+=(double)1/(i+1);
          else
           temp-=(double)1/(i+1);
        }
        printf("%.2lf\n",temp);
    }
    //system("pause");
    return 0;
}
