// Input a string from the user and display the same.

#include <stdio.h>

int main(){

    int i;
    char arr[100];
    printf("Enter the string");
    
     scanf("%s",arr);
    for(i=0;arr[i]!='\0';i++)
    {
        printf("%c",arr[i]);
    }


    return 0;

}