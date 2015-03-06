#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
 double x1,x2,y1,y2,sum;
 double result;
 while(scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2)!=EOF)
 {
  sum=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
  result=sqrt((double)sum);
  printf("%.2lf\n",result);
 }
 return 0;
}
