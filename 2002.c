#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.1415927

int main()
{
 double r;
 double v;
  while(scanf("%lf",&r)!=EOF)
  {
      v=(double)4*PI*pow(r,(double)3);
      v=v/(double)3;
      printf("%.3lf\n",v);
  }
}
