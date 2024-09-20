// Store details (Roll No. and Marks) of all the students of your class in an array of structure and then find 
// the topper of the class.

#include<stdio.h>
struct stin
{
    int rollno;
    int Marks;
};
int main()
{
    struct stin s[100];
    int x,i,n,topmarks=-1,toprol;
    printf("Enter the no. of students in the class\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the roll no. of student%d\n",i+1);
        scanf("%d",&s[i].rollno);

        printf("Enter the marks of student %d\n",i+1);
        scanf("%d",&s[i].Marks);
        
        printf("\n");
    }

    for(i=0;i<n;i++)
    {
        if(s[i].Marks>topmarks)
        {
            topmarks=s[i].Marks;
            toprol=s[i].rollno;
        }
    }
    printf("The topper is %d and the top marks are %d",toprol,topmarks);
    return 0;
}