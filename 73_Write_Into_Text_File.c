//Write into a text file

#include<stdio.h>

int main()
{
   FILE *p;
   int i;
   p=fopen("abc.txt","w");
   for(i=1;i<=10;i++)
   fprintf(p,"%d ",i);
   fclose(p);

}