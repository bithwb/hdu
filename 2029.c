#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char a[100];
void cp(int x,int y)
{
    if(x>=y)
        printf("yes\n");
    else
    {
        if(a[x]==a[y])
        {
            cp(x+1,y-1);
        }
        else
        {
            printf("no\n");
        }
    }
}
int main()
{
    int i,j,n;
    //char a[100];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(a);
        cp(0,strlen(a)-1);
    }
}
