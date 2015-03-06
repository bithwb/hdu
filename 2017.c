#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,i,k;
    int length;
    char a[1000];
    scanf("%d",&n);
    while(n--)
    {   k=0;
        scanf("%s",&a);
        length=strlen(a);
        for(i=0;i<length;i++)
        {
            if(a[i]>=48&&a[i]<=57)
                k++;
        }
        printf("%d\n",k);
    }
    return 0;
}
