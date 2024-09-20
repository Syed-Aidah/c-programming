//Swap two numbers using functions (call-by-reference method).

#include<stdio.h>
void swap(int *x , int *y);
int main()
{
    int x,y;
    printf("Enter the elements to be swapped");
    scanf("%d,%d",&x,&y);
    swap(&x,&y);
    printf("The numbers after swapping are %d and %d",x,y);
    return 0;
}
void swap(int *x, int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;

}