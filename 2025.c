#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char a[101],max;
    //char c[6]="(max)";
    int i,j,length;
    while(gets(a))
    {
        length=strlen(a);
        max=a[0];
        for(i=1;i<length;i++)
            {
                if(a[i]>max)
                  max=a[i];
            }
            for(i=0;i<length;i++)
            {
                if((i!=length-1)&&a[i]==max)
                {
                    printf("%c(max)",a[i]);
                }
                else if(i==length-1)
                {
                    if(a[i]==max)
                    {
                        printf("%c(max)\n",a[i]);
                    }
                    else
                    {
                        printf("%c\n",a[i]);
                    }
                }
                else
                {
                    printf("%c",a[i]);
                }
            }
    }
    return 0;
}
