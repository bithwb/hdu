#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    double a;
    while(scanf("%lf",&a)!=EOF)
    {
        if(a>=0)
            printf("%.2lf\n",a);
        else
        {
            a=fabs(a);
            printf("%.2lf\n",a);
        }

    }
    return 0;
}
