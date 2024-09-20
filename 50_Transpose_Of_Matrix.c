//Find transpose of a matrix.

#include<stdio.h>
int main()
{
   int a[10][10],b[10][10],m,n,i,j;
printf("Enter the number of rows and coloumns \n");
scanf("%d,%d",&m,&n);
printf("Enter the elements row by row");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
}    
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
       b[j][i]=a[i][j];
    }
}
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d",b[i][j]);
    }

printf("\n");
}
return 0;
}
