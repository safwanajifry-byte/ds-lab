#include <stdio.h>
struct student
{
    char name[20];
    int rollno;
    float mark;
};
struct student s1[3];
int main()
{
    int i;
printf("Enter Name, RollNo, and Marks of Three Students:\n");
for(i = 0; i < 3; i++)
    {
        scanf("%s%d%f\n", s1[i].name, &s1[i].rollno, &s1[i].mark);
    }
printf("\nStudent Name\tStudent Roll No\tStudent Marks\n");
for(i = 0; i < 3; i++)
    {
        printf("\n%s\t\t%d\t\t%.2f",
        s1[i].name, s1[i].rollno, s1[i].mark);
    }
return 0;
}

