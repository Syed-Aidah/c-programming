#include <stdio.h>
#include <math.h>
int main()
{double x,max,perc;
printf("enter the marks obtained \n");
scanf("%lf",&x);
printf("enter the maximum marks \n");
scanf("%lf",&max);
perc= x/max*100;
printf("the percentage is %lf \n",perc);
if(x>max)
{printf("Wrong input");}
else{
    if(perc>=90)
{
    printf("the grade is 0 \n");

}
if(perc<90 && perc>=80)
{
    printf("the grade is A");
}
if(perc<80 && perc>=70)
{
    printf("the grade is B \n");
}
if(perc<70 && perc>=60)
{
    printf("the grade is C \n");
}
if(perc<60 && perc>=50)
{
    printf("the grade is D \n");
}
if(perc<50)
{
    printf("YOU FAILED!");
    }

}
return 0;
}








