//Read two numbers from keyboard and compare them

#include <stdio.h>

int main(){
    int a,b;
printf("Enter the two numbers you want to compare \n");
scanf("%d %d",&a,&b);
if(a>b)
printf("%d is the greater number",a);
else
printf("%d is the greater number",b);
return 0;
}
