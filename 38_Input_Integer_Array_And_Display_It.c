//Input an integer array from the user and display the same

#include <stdio.h>

int main()
{
    int arr[10],i,j;
   

    for(i=0;i<=9;i++)
     {
        printf("Enter the %d element of the integer array \n",(i+1));
     scanf("%d",&arr[i]);}
    for(i=0;i<=9;i++)
     printf("%d ",arr[i]);
return 0;

}