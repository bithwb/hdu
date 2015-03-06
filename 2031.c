#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int N,R;
    char a[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    char b[128];
    int L,k,s;
    int i,j;
    while(scanf("%d %d",&N,&R)!=EOF)
    {
        memset(b,'\0',sizeof(b));
        k=0;
        L=abs(N);
        while(1)
        {
            if(L<R)
            {
                j=L%R;
                b[k++]=a[j];
                b[k++]='\0';
                break;
            }
            else if(L>=R)
            {
                j=L%R;
                b[k++]=a[j];
                L=L/R;
            }
        }
        if(N<0)
            printf("-");
        s=strlen(b);
        for(i=s-1;i>0;i--)
        {
            printf("%c",b[i]);
        }
        printf("%c\n",b[0]);
    }
    return 0;
}
