// Check whether a number is Armstrong number or not

#include<stdio.h>
#include<math.h>

int main()
{
    int l=0,x,r,n,sum=0,y;
    printf("enter the number you want to check");
    scanf("%d",&n);
    x=n;
    y=n;
    while(n!=0)
    {
        n=n/10; 
        l++;
    }

 while(x!=0)
 {
    r=x%10;
    sum=sum+pow(r,l);
    x=x/10;
 }
printf("%d \n",sum);
if(y==sum)
{
    printf("Armstrong no.");
}
    return 0;

}