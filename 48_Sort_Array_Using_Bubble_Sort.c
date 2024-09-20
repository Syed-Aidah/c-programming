// Sort an integer array using Bubble Sort

#include<stdio.h>

int main()
{int arr[100],n,i,j,temp;
    printf("Enter the length of the integer array \n");
    scanf("%d",&n);
    printf("Enter the elements of the integer array\n");
    for(i=0;i<n;i++)
    { 
        scanf("%d",&arr[i]);
    }
    //sorting the array
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<=n-2-i;j++)
        if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        else
        {
            continue;
        }
    }
    for(i=0;i<n;i++)
     printf("%d",arr[i]);
     return 0;

}