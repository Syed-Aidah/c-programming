//Store the data of a student in structure array and display the same

#include <stdio.h>
struct stin
{
    int rollno;
    int marks;
    char name[50];
    char grade;
};
int main()
{ struct stin s;


    printf("roll.n0?");
    scanf("%d",&s.rollno);
    printf("Name");
    scanf("%s",&s.name);
    printf("marks");
    scanf("%d",&s.marks);
    getchar();
    printf("Grade");
    scanf("%c",&s.grade);
printf("%d\t%s\t%d\t%c\t",s.rollno,s.name,s.marks,s.grade);
return 0;

}