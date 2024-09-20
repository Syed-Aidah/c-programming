// Check if a string is palindrome or not using pointers.

#include<stdio.h>

int main()
{
    char str[10];
    char *s=str;
    char *l=s;
    printf("Enter string \n");
    scanf("%s",&str);

    while(*l!=0)
    {
        l++;
    
    }
    l--;
    while(*s==*l)
    {
        if(s<l)
        {
            s++;
            l--;
        }
        else
        {
            printf("Pallandrome");
            return 0;
        }
    }
    printf("Not pallandrome");
    return 0;
}
