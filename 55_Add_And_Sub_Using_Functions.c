//add and subtract two numbers using functions(a+b,a-b,b-a)
#include<stdio.h>
int add(int x , int y );
int subtract (int x, int y );
int main()
{
    int x,y;
    printf("Enter the numbers you want to add \n");
    scanf("%d,%d",&x,&y);
    add(x,y);
    subtract(x,y);
    return 0;
}
int add(int x,int y)
{
   int z;
   z=x+y;
   printf("%d+%d=%d \n",x,y,z);
   return 0;
}
int subtract(int x,int y)
{
    int z,k;
    z=x-y;
    k=y-x;
    printf("%d-%d=%d \n",x,y,z);
    printf("%d-%d=%d \n",y,x,k);
    return 0;
}