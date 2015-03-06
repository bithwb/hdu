#include<stdio.h>
#include<stdlib.h>

int main()
{
 int a,b;
 int sum;
 while(~scanf("%d %d",&a,&b))
 {
     if(a==0&&b==0)
        break;
     else
     {  sum=1;
         while(b--)
         {
             sum=(sum*a)%1000;
         }
         printf("%d\n",sum);
     }
 }
 return 0;
}
