Use nesting of if-else (compare three numbers).
#include <stdio.h>

int main() 
{
    int a, b, c;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a,&b,&c);
    if(a==b)
    {
        if(a>c)
        {
            printf("the largest no. is %d",c);
        }
        if(c>a)
        {
            printf("%d is the largest no ",c);
        }
    }
    else if(b==c)
    {
        if(b>a)
        {
            printf("The largest nos is %d",b);
        }
        if(a>b)
        {
            printf("The largest no is %d",a);
        }
    }
    else if(a==c)
    {
        if(a>b)
        {
            printf("The largest no is %d",a);
        }
        if(b>a)
        {
            printf("The largest no is %d",b);
        }
        
    }
    else if (a > b) 
    {
        if (a > c) 
        {
            printf("The largest number is: %d\n", a);
        } 
        else 
        {
            printf("The largest number is: %d\n", c);
        }
    } 
    else if(b>a)
    {
        if (b > c) 
        {
            printf("The largest number is: %d\n", b);
        } 
        else 
        {
            printf("The largest number is: %d\n", c);
        }
    }
    else if(a==b && b==c)
    {
        printf("All three no.s are equal");
    }

    return 0;
}

