#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n,m,i,j,temp,count;
    int a[51][6];
    double aver0,aer1[6];
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                scanf("%d",&a[i][j]);
        }
        //学生平均成绩
        for(i=0;i<n;i++)
        {
            aver0=0;
            for(j=0;j<m;j++)
                aver0+=(double)a[i][j];
            aver0/=m;
            if(i==0)
               printf("%.2lf",aver0);
            else
            {
                printf(" %.2lf",aver0);
            }
        }
        printf("\n");
        //科目的平均成绩
        for(i=0;i<m;i++)
        {temp=0;
            for(j=0;j<n;j++)
            {
                temp+=a[j][i];
            }
            aer1[i]=(double)temp/n;
            if(i==0)
               printf("%.2lf",aer1[i]);
            else
            {
                printf(" %.2lf",aer1[i]);
            }
        }
        printf("\n");
        count=0;
        for(i=0;i<n;i++)
        {
            temp=0;
            for(j=0;j<m;j++)
            {
                if((double)a[i][j]>=aer1[j])
                    temp++;
            }
            if(temp==m)
              count++;
        }
        printf("%d\n",count);
        printf("\n");
    }
    return 0;
}
