#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    int n,i,j;
    int a[101];
    int m,temp;
    while(scanf("%d",&n)!=EOF&&n)
    {
          memset(a,0,sizeof(a));
          for(i=0;i<n;i++)
           {
              scanf("%d",&a[i]);
           }
         for(i=0;i<n;i++)
         {   m=i;
             for(j=i+1;j<n;j++)
             {
                 if(abs(a[j])>abs(a[m]))
                    m=j;
             }
             if(m!=i)
             {
               temp=a[i];
               a[i]=a[m];
               a[m]=temp;
             }
         }
          printf("%d",a[0]);
          for(i=1;i<n;i++)
              printf(" %d",a[i]);
          printf("\n");

    }
}
