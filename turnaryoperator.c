#include <stdio.h>

int main() {
    int a,b,max;
    printf("enter the nimbers you want to compare");
    scanf("%d,%d",&a,&b);
    max= (a>b)? a:b;
    printf("The maximum number between %d and %d is: %d\n",a,b, max);
    return 0;
}
