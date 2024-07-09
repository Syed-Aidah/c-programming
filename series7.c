//Display the series: 2 4 8 16 32 64 128 ....... (n terms)
#include<stdio.h>
int main()
{int i,n,x;
printf("enter the no of terms of the sries you want ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{ x=pow(2,i);
printf("%d ",x);
}
return 0;
}