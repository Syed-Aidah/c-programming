//Display table of all integers from 2 to 10 (2x1=2, 2x2=4, ……., 10x10=100)

#include<stdio.h>

int main(){

    int i,j,n;
    for(i=2; i<=10; i++)
     {for(j=1; j<=10;j++)
      {
        n=i*j;
         printf("%d x %d = %d \n ",i,j,n);

     }
     printf("\n\n");
    
      }
      return 0;
}