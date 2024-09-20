//Display contents of a string in reverse order using pointers.

#include<stdio.h>

int main()
{
    char *a="Aidah";
    int *i=a ;
    
    while(*i!=0)
    {
        i++;
    }
    i--;
    while(i>=a)
   { printf("%d",*i);
    i--;
   }


}