//Find sum of series: 1 + 1/2 + 1/4 + 1/6 + ….+ 1/n

#include<stdio.h>

int main(){

    int n;
    printf("Enter the denominator untill which you want sum \n");
    scanf("%d",&n);
if(n%2==0)
 { 
    float i,sum=1;
    for(i=2; i<=n; i=i+2)
   {
    sum=sum+(1/i);
   }
 printf("%lf",sum);
 }
 else if(n==1)
 printf("The sum is 1");
 else
 printf("Enter even no.");

    return 0;

}
 