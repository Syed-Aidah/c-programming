//Check whether a string is palindrome or not.
#include <stdio.h>

int main() {
    char a[100];
    int i, j, flag;

    printf("Enter the string: \n");
    scanf("%s", a);
    i=0;
    while(a[i]!=0)
    {
        i++;
    }
    i--;
    j=0;
    while(a[j]==a[i])
    {
        if(j<i)
        {
        i--;
        j++;
        }
        else
        {flag=1;
        break;}
    }
    if(flag==1)
    {printf("P");}
    else
    {printf("NP");}
    
   return 0;
}