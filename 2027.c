#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int i,j,n,b[5],length;
    char a[101],c[5]={'a','e','i','o','u'};
    scanf("%d",&n);
    getchar();
    for(j=0;j<n;j++)
    {memset(b,0,sizeof(b));
        gets(a);
        length=strlen(a);
        for(i=0;i<length;i++)
        {
            switch(a[i])
            {
                case 'a':b[0]++;break;
                case 'e':b[1]++;break;
                case 'i':b[2]++;break;
                case 'o':b[3]++;break;
                case 'u':b[4]++;break;
                default : continue;break;
            }
        }
       if(j==0)
       {
           for(i=0;i<5;i++)
           {
               printf("%c:%d\n",c[i],b[i]);
           }
       }
       else
       {
           printf("\n");
           for(i=0;i<5;i++)
           {
               printf("%c:%d\n",c[i],b[i]);
           }
       }
    }
}
