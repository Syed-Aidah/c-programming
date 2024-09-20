// Define and use a constant (e.g. PI as 3.14159) in a program

#include <stdio.h>
#include<math.h>
int main(){
    const double PI=3.14;
    double r,c,a;
    printf("Enter the radius of the circle you want to find area and circumference of");
    scanf("%lf",&r);
    c=2*PI*r;
    a=PI*pow(r,2);
printf("area is %lf \n",a);
printf("circumference is %lf \n",c);
    return 0;
}