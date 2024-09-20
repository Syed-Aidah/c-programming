// Function to search an element in an integer array using functions (passing array to function)

#include <stdio.h>
int search (int a[],int n, int x);
int main()
{    
    int i,x,n,d,a[100];
    printf("Enterthe size f the integer array");
    scanf("%d",&n);

    printf("Enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the element you want to search for");
    scanf("%d",&x);

    d=search(a,n,x);

    if(d==-1)
    printf("Not found");

    else
    printf("found at %d",d);

    return 0;
}
int search(int a[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
          {
            return i+1;
          }
    }
   return -1;
}