#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c;
    double R1,R2, realpart,imaginarypart;
    printf("Enter the coefficients \n");
    scanf("%lf,%lf,%lf",&a,&b,&c);
    double D=b*b-4*a*c;
    if(
        D>0
    )
   {double R1=-b+sqrt(D)/2*a;
   double R2=-b-sqrt(D)/2*a;
   printf("the roots are  %lf, %lf",R1,R2);}
   if(D<0)
   {
    realpart=-b/(2*a);
    imaginarypart=sqrt(-D)/2*a;
    printf("R1=%lf+%lfi",realpart,imaginarypart);
    printf("R2=%lf-%lfi",realpart,imaginarypart);}
   return 0;
}
