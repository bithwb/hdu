#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int m,n,i,j;
    int x,y,s;
    int temp;
    while(scanf("%d %d",&m,&n)!=EOF)
    { x=0;y=0;s=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==0&&j==0)
                   {
                    scanf("%d",&temp);
                    x=i;y=j;s=temp;
                   }
                else
                   {
                       scanf("%d",&temp);
                       if(abs(temp)>abs(s))
                       {
                           x=i;y=j;s=temp;
                       }
                   }
            }
        }
        printf("%d %d %d\n",x+1,y+1,s);
    }
}
