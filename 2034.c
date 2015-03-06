#include<stdio.h>
#include<stdlib.h>
int find(int a,int b[],int m)
{
    int i,temp=0;
    if(!m)
    {
        temp=0;
    }
    else{
    for(i=0;i<m;i++)
        if(b[i]==a)
           temp=1;
    }
    if(temp)
        return 1;
    else
        return 0;
}
int main()
{
    int n,m;
    int a[101],b[101],c[101];
    int i,j,k,t;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        if(n==0&&m==0)
            break;
        else
        {
            for(i=0;i<n;i++)
                scanf("%d",&a[i]);
           // getchar();
            for(i=0;i<m;i++)
                scanf("%d",&b[i]);
            getchar();
            k=0;
            for(i=0;i<n;i++)
            {
                if(!find(a[i],b,m))
                    c[k++]=a[i];
            }
            for(i=0;i<k-1;i++)
            {
                for(j=i+1;j<k;j++)
                {
                    if(c[i]>c[j])
                    {
                        t=c[i];
                        c[i]=c[j];
                        c[j]=t;
                    }
                }
            }
            if(k==0)
                printf("NULL\n");
            else
            {
                for(j=0;j<k;j++)
                    printf("%d ",c[j]);
                printf("\n");
            }
        }
    }
}
