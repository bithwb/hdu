#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[32][32];
    int i,j;
    int n;
    while(scanf("%d",&n)!=EOF)
    {//µÝÍÆ
        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
                if(i==j||j==0)
                    a[i][j]=1;
                else
                    a[i][j]=a[i-1][j]+a[i-1][j-1];
            }
        }
      for(i=0;i<n;i++)
      {
          for(j=0;j<=i;j++)
          {
              if(i==j){
                printf("%d\n",a[i][j]);
              }
              else
              {
                  printf("%d ",a[i][j]);
              }
          }
      }
      printf("\n");
    }
}
