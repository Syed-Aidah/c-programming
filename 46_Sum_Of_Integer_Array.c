// find sum of all elements of an integer array

#include<stdio.h>
int main()
{
    int arr[100],n, i,sum=0;
    printf("enter the size of integer array");
    scanf("%d",&n);
    printf("enter the elements of the integer array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}