#include <stdio.h>

struct Student
{
    char name[50];
    int rollno;
    float marks;
    char grade;
};

void assignGrade(struct Student *s)
{
    if(s->marks >= 90)
        s->grade='A';
    else if(s->marks >=75)
        s->grade='B';
    else if(s->marks >=60)
        s->grade='C';
    else if(s->marks >=45)
        s->grade='D';
    else
        s->grade='F';
}

void printTopper(struct Student s[], int n)
{
    int i, top=0;

    for(i=1;i<n;i++)
    {
        if(s[i].marks > s[top].marks)
            top=i;
    }

    printf("\nTopper: %s", s[top].name);
    printf("\nMarks: %.2f", s[top].marks);
}

void main()
{
    struct Student s[3];
    int i;

    for(i=0;i<3;i++)
    {
        printf("\nStudent %d\n",i+1);

        printf("Name: ");
        scanf("%s",s[i].name);

        printf("Roll No: ");
        scanf("%d",&s[i].rollno);

        printf("Marks: ");
        scanf("%f",&s[i].marks);

        assignGrade(&s[i]);
    }

    printf("\nName\tRoll\tMarks\tGrade\n");

    for(i=0;i<3;i++)
    {
        printf("%s\t%d\t%.2f\t%c\n",
        s[i].name,s[i].rollno,s[i].marks,s[i].grade);
    }

    printTopper(s,3);

    return 0;
}