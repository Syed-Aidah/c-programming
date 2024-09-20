//Display contents of a character array.

#include <stdio.h>

int main()
{

    int i;
    char arr[10]={'A','B','C','D','E','F','G','H','I'};
     for(i=0;arr[i]!=0;i++)
       {
           printf("%c ",arr[i]);
       }
 return 0;
}
