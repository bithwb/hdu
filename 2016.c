#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
    int n,i,j,k;
    int a[100];
    int temp,min;
    while(scanf("%d",&n)!=EOF)
    { memset(a,0,sizeof(a));
        if(n==0)
            break;
        else
        {
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            min=a[0];
            k=0;
            //printf("%d--%d---1\n",k,min);
            for(i=1;i<n;i++)
            {
               if(a[i]<min)
                { //printf("%d--%d<%d\n",i,a[i],min);
                    k=i;
                    min=a[i];
                }
            }
           //printf("%d--%d---2\n",k,min);
            temp=a[0];
            a[0]=a[k];
            a[k]=temp;
            printf("%d",a[0]);
            for(i=1;i<n;i++)
            {
                printf(" %d",a[i]);
            }
            printf("\n");
        }
    }
}
