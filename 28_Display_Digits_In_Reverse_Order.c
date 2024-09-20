//Display the digits of any natural number in reverse order. [Use while loop]

#include <stdio.h>

int main(){

    int n,i,x;
printf("Enter the number you want to reverse \n");
scanf("%d",&n);
while (n!=0)
    {
        x=n%10;
        printf("%d",x);

        n=n/10;
    }

printf("%d",n);
    return 0;

}