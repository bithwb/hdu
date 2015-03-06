#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int judge(char c)
{
    if(c<0)
        return 1;
    else
        return 0;
}
int main()
{
    char a[10000];
    int i,j,n,length,temp;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        temp=0;
        gets(a);
        length=strlen(a);
        for(i=0;i<length;i++)
        {
            if(judge(a[i]))
            {
                temp++;
            }
        }
        printf("%d\n",temp/2);
    }

}
