//Display the series: 1 2 2 3 3 3 4 4 4 4 ....... (up to n) [nesting of loops]

#include<stdio.h>

int main(){

    int i,j,n;
printf("enter no of terms of series");
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(j=1;j<=i;j++)
{
printf("%d",i);
}
printf("\t");
}
    return 0;

}