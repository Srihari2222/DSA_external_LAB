#include<stdio.h>
struct student
{
    char name[100];
    int rollnumber;
    int marks;
}s[3];
int main()
{
    for(int i=0;i<3;++i)
    {
        printf("Enter the details of Student%d\n",i+1);
        printf("Enter the name of the student : ");
        scanf("%s",s[i].name);
        printf("Enter the rollnumber : ");
        scanf("%d",&s[i].rollnumber);
        printf("Enter the marks: ");
        scanf("%d",&s[i].marks);
    }
    for(int i=0;i<3;i++)
    {
        printf("Details of Student%d\n",i+1);
        printf("Name: %s",s[i].name);
        printf("\nRollnumber: %d",s[i].rollnumber);
        printf("\nMarks: %d",s[i].marks);
    }
    return 0;
}