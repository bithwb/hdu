#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int ah,am,as,bh,bm,bs;
    int ch,cm,cs;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        ch=0;
        cm=0;
        cs=0;
        scanf("%d %d %d %d %d %d",&ah,&am,&as,&bh,&bm,&bs);
        getchar();
        cs=(as+bs)%60;
        cm=(am+bm+(as+bs)/60)%60;
        ch=ah+bh+(am+bm+(as+bs)/60)/60;
        printf("%d %d %d\n",ch,cm,cs);
    }
    return 0;
}
