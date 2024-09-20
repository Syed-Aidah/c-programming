//find factorial of a number using recursion
#include<stdio.h>
long int fact(int n);
int main()
{
    int n,ans;
    printf("Enter the number");
    scanf("%d",&n);
    ans=fact(n);
    printf("%d",ans);
    return 0;
}
long int fact(int n)
{
    if(n>1)
    return n*fact(n-1);
    else
    return 1;
}