// Swap two numbers using functions (call-by-value method)

#include<stdio.h>
void swap(int,int);

    int main()
    {
    int x,y;
    printf("Enter the two numbers you want to swap");
    scanf("%d,%d",&x,&y);
    swap(x,y);
   
    return 0;
    }
    void swap(int x,int y)
    {
        int z;
        z=x;
        x=y;
        y=z;
         printf("The swapped values are %d,%d",x,y);

    }

