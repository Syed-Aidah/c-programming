//to search for an element in an integer array(linear search)

#include<stdio.h>
int main()
{
    int arr[100],i,n,x,flag;
    printf("Enter the size of integer array");
    scanf("%d",&n);
    printf("Enter the elements of integer");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to search for");
    scanf("%d",&x);
     for(i=0;i<n;i++)
    {
        if(arr[i]==x){
        flag=1;
        break;}
    }
    if(flag==1){
    printf("found");}
    else
    {printf("Not Found");}

return 0;
}

