//Display the Fibonacci series: 0 1 1 2 3 5 8 13 21 ....... (n terms)

#include<stdio.h>
#include<math.h>

int main(){
    int n,x,y,i,z;
printf("Enter the number of tems of the series you want");
scanf("%d",&n);
if(n>0)
printf("0 ");
if(n>1)
printf("1 ");
if(n>2)
x=0;
y=1;
for(i=1;i<=(n-2);i++)
{
z=x+y;
 printf("%d ",z);
 x=y;
 y=z;
}  
 return 0;

}
