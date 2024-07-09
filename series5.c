#include<stdio.h>
int main()
{
    int i,product, n;
    printf("enter the no of terms you want to find the product of ");
    scanf("%d",&n);
    product=1;
    for(i=1;i<=n;i++)
    {
        product=product*i;
    }
        printf("%d",product);



}