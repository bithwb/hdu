#include<stdio.h>
#include<stdlib.h>

int main(){
    char c[3],a;
    int i,j,k;
    // ‰»Î 
    while(gets(c))
    {//≈≈–Ú 
      for(i=0;i<3;i++)
        {k=i;             
         for(j=k+1;j<3;j++)
          {if(c[k]>c[j])
            k=j;      
          }
         if(k!=i)
          {a=c[i];
           c[i]=c[k];
           c[k]=a;
          }          
        }
        // ‰≥ˆ 
        printf("%c",c[0]); 
        for(i=1;i<3;i++)
         printf(" %c",c[i]);
      printf("\n");
    }
         return 0;
    }
 
