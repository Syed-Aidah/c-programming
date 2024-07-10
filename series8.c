//Display the series: 2 4 16 256 65536 ....... (n terms)
#include<stdio.h>
#include<math.h>

int main()
{float i,n,x=2;
printf("enter the no of terms of the sries you want ");
scanf("%f",&n);
printf("2 ");
for(i=2;i<=n;i++)
{ x=pow(x,2);
printf("%f ",x);

}
return 0;
}