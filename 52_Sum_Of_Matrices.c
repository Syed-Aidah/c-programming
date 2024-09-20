//input two matrices from the user and find their sum
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,m,n,x,y;
   printf("Enter the no of rows and coloumns of the matrix\n");
   scanf("%d,%d",&m,&n);
   //First matrix
   printf("Enter the elements of the matrix row by row");
   for(i=0;i<m;i++)
   {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
   }
   //Second Matrix
   printf("Enter the elements row by row of 2nd matrix");
   for(i=0;i<m;i++)
   {
    for(j=0;j<n;j++)
    {
      scanf("%d",&b[i][j]);
    }
   }
  //summation
   for(i=0;i<m;i++)
   {
    for(j=0;j<n;j++)
    {
      c[i][j]=a[i][j]+b[i][j];
      printf("%d",c[i][j]);
    }
    printf("\n");
   }

    return 0;



}