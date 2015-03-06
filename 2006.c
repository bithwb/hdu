#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,a,result,i;
    while(scanf("%d",&n)!=EOF){
            result=1;
      for(i=0;i<n;i++)
       {
         scanf("%d",&a);
         if(a%2!=0)
          {
             result*=a;
          }
       }
      printf("%d\n",result);
    }
    return 0;
}
