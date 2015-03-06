#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n,i,j;
    int a[101][2];
    double sum;
   // int temp;
    while(scanf("%d",&n)!=EOF&&n)
    {
        for(i=0;i<n;i++)
        {  for(j=0;j<2;j++)
         {
          scanf("%d",&a[i][j]);
         }
        }
        getchar();
        sum=0.0;
       // temp=0;
        for(i=0;i<n;i++)
        {  if(i!=n-1){
            //temp+=abs(a[i][0]*a[i+1][1]-a[i+1][0]*a[i][1]);
            sum+=abs(a[i][0]*a[i+1][1]-a[i+1][0]*a[i][1]);
          }
          else
          {
              //temp+=abs(a[i][0]*a[0][1]-a[0][0]*a[i][1]);
              sum+=abs(a[i][0]*a[0][1]-a[0][0]*a[i][1]);
          }
        }
        //printf("%d\n",temp);
        printf("%.1f\n",sum/2);
    }
    return 0;
}
