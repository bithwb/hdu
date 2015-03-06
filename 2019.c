#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void out(int a[],int m)
{
    int i;
    printf("%d",a[0]);
    for(i=1;i<m;i++)
        printf(" %d",a[i]);
    printf("\n");
}
int main()
{
        int a[102];
        int n,m,i,j,k;
        while(scanf("%d %d",&n,&m)!=EOF)
        { //system("pause");
            if(n==0&&m==0)
                break;
            else
            { //system("pause");
                memset(a,0,sizeof(a));
                // system("pause");
                for(i=0;i<n;i++)
                 scanf("%d",&a[i]);
                 //system("pause");
                for(i=n-1;i>=0;i--)
                {
                    if(m<=a[i])
                    {  if((i-1)>=0&&m>=a[i-1])
                       {
                           j=i;
                           for(k=n-1;k>=j;k--)
                              a[k+1]=a[k];
                           a[j]=m;
                           break;
                       }
                       else if(i==1&&m<=a[i-1])
                       {
                           j=i-1;
                           for(k=n-1;k>=j;k--)
                              a[k+1]=a[k];
                           a[j]=m;
                           break;
                       }
                       else
                           continue;
                    }
                    else if(i==n-1&&m>=a[i])
                    {
                        a[i+1]=m;
                        break;
                    }
                    else
                        continue;
                }
                out(a,n+1);
            }
        }
        return 0;
}
