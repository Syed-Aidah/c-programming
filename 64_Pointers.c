//Demonstrate use of pointers in programming.

#include<stdio.h>
void f_age(int *);
int main()
{
    int age;

    printf("What is your age?\n");
    scanf("%d",&age);

    printf("The location of age is %p\n",&age);
    printf("The value of age is %d\n",age);

    f_age(&age);//int *page recieves &age
    

    return 0;
}
void f_age(int *pAge)
{   
    printf("The location of pAge is %p\n",pAge);
    printf("The value of pAge is %d\n",*pAge);
}