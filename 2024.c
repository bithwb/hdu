#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int judge1(char c)
{
    if((c>='A'&&c<='Z')||(c>='a'&&c<='z')||c=='_')
        return 0;
    else
        return 1;
}
int judge(char a[])
{
    int length,i,j,flag=0;
     length=strlen(a);
     for(i=0;i<length;i++)
     {
         if(i==0&&((a[i]>='0'&&a[i]<='9')||judge1(a[i])))
          {
              flag=1;
          }
         else if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z')||(a[i]>='0'&&a[i]<='9')||a[i]=='_')
         {
             continue;
         }
         else
         {
            flag=1;
         }
     }
    // printf("%d\n",flag);
     if(flag)
        return 0;
     else
        return 1;
}
int main()
{
    char a[51];
    int n,i,j;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
     gets(a);
     if(judge(a))
            printf("yes\n");
     else
        printf("no\n");
    }
}
