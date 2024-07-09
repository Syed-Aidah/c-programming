//Find product of series: 1 2 3 4 5 .... n
#include<stdio.h>
int main()
{int i,product, n;
printf("enter the no. you want to find the factorial of");
scanf("%d",&n);
product=1;
for(i=n;i>=1;i--)
{product=product*i;}
    printf("%d ",product);

return 0;

}