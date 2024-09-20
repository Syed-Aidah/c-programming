//Find sum of series: 1 2 3 4 5 .... n

#include <stdio.h>

int main()
{
    int i,n,sum;
    printf("enter the number untill which you want the sum \n");
    scanf("%d",&n);
    sum=0;
    for(i=1; i<=n; i++)
    {
        
        sum=sum+i;
    }
        printf("%d",sum);
    
    return 0;
}
