//Input a string from the user and display it in reverse order.

#include <stdio.h>

int main(){

    int i,j;
    char name[100];

    printf("Enter your name\n");
    scanf("%s",name);

    i=0;
    while(name[i]!='\0')
    {
        i++;
    }
    i--;
    for (j=(i); j>=0; j--)
    {
        printf("%c",name[j]);
    }
    

    return 0;
}