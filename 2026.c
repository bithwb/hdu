#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char a[101];
    int i,length;
    while(gets(a))
    {
        length=strlen(a);
        a[0]=a[0]-32;
        for(i=1;i<length;i++)
        {
          if(a[i]==' ')
          {
              a[i+1]=a[i+1]-32;
          }
        }
       puts(a);
    }
}
