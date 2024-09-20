//. Display the series: 2 4 8 16 32 64 128 ....... (n terms)

#include <stdio.h>
#include<math.h>
int main()
{
    int i,n, p;
    printf("Enter the number of terms of the series"); 
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    p=pow(2,i);
    printf("%d ",p);
    }
    return 0;
}