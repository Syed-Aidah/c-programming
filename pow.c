#include<stdio.h>
#include<math.h>
int main()
{double a,b,x;
printf("Enter the base number and the power to which it is to be raised \n");
scanf("%lf,%lf",&a,&b);
x=pow(a,b);
printf("The number %lf raised to the poer %lf gives %lf",a,b,x);
return 0;
}