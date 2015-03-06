#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
 int n,m,i,j,k;
 int temp;
 int a[101];
 while(scanf("%d %d",&n,&m)!=EOF)
 {
   k=0;
   j=0;
   temp=0;
   memset(a,0,sizeof(a));
  //printf("%d %d\n",n,m);
   for(i=1;i<=n;i++)
   { //printf("%d---%d-----5\n",i,k);
       if(k!=m)
       {
           temp=temp+2*i;
           k++;
           if(k==m)
           {
               temp/=m;
               a[j++]=temp;
               k=0;
               temp=0;
           }
           else if(i==n&&k<m)
           {
             temp=temp/k;
             a[j++]=temp;
           }
           //printf("%d---%d-----4\n",i,k);
       }
   }
   printf("%d",a[0]);
   for(k=1;k<j;k++)
     printf(" %d",a[k]);
   printf("\n");
 }
 return 0;
}
