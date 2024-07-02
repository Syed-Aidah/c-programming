#include<stdio.h>
int main()
{int a,b,c;
    printf("enter the three numbers you want to compare");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>b && a>c)
    printf("%d is the greater no",a);
    else if(b>a && b>c)
    printf("%d is the greater no.",b );
    else if(c>a && c>b)
    printf("%d is the greater no.",c);
    return 0;
}