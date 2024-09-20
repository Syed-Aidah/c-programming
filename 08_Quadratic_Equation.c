//Find roots of a quadratic equation.

#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c,D,R1,R2, realpart,imaginarypart;

   printf("Enter the coefficients of the quadratic equation");
   scanf("%lf %lf %lf",&a,&b,&c);
   if(a==0)
   printf("The given equation is not quadratic");
   else
{
   D=(b*b)-4*a*c;
   if(D>=0)
   {
    double R1=(-b+sqrt(D))/2*a;
    double R2=(-b-sqrt(D))/2*a;
   
    printf("The roots are %0.2lf,%0.2lf",R1,R2);
   }
  else
  {
    realpart=-b/2*a;
    imaginarypart=sqrt(-D)/2*a;
    printf("The roots are %0.2lf+%0.2lfi and %0.2lf-%0.2lfi",realpart,imaginarypart,realpart,imaginarypart);
  }
}

    return 0;
}