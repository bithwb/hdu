#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,i,j;
    int a[60];
    memset(a,0,sizeof(a));
    //ǰ4��ÿ��ţ����Ŀ����1Ϊ�Ȳ������
    for(i=0;i<5;i++)
            a[i]=i;
    //����ţ����Ŀ��ǰһ���ţ����Ŀ����4��ǰ��ţ����Ŀ
    //��n���ţ����ǰһ��ţ��ͷ�����������µ�ͷ����Ҳ������������ĸţͷ����n-3��
    for(i=5;i<60;i++)
        a[i]=a[i-1]+a[i-3];
    while(scanf("%d",&n)!=EOF)
    {if(n!=0)
        printf("%d\n",a[n]);
     else
        break;
    }
    return 0;
}
