#include<stdio.h>
int main()
{
    struct student
    {
        int roll_no,total_marks;
        char name[80];
        char dept[80];
        char section;
        float fees;
    };
    struct student s[50];
    for(int i=1;i<3;i++)
    {
        printf("Enter the name of the student %d:\n",i);
        scanf("%s",s[i].name);
        fflush(stdin);
        printf("Enter the Roll number of the student:\n");
        scanf("%d",&s[i].roll_no);
        fflush(stdin);
        printf("Enter the section of the student\n");
        scanf("%c",&s[i].section);
        fflush(stdin);
        printf("Enter the department of the student\n");
        scanf("%s",s[i].dept);
        fflush(stdin);
        printf("Enter the fees of the student\n");
        scanf("%f",&s[i].fees);
        fflush(stdin);
        printf("Enter the result(total marks obtained)\n");
        scanf("%d", &s[i].total_marks);
    }
    printf("\nThe student who scored highest marks is: ");
    if(s[1].total_marks>s[2].total_marks)
    {
        printf("%s\n",s[1].name);
        printf("Roll number : %d\n", s[1].roll_no);
        printf("Section : %c\n",s[1].section);
        printf("Department : %s\n",s[1].dept);
        printf("Fees : %.2f\n", s[1].fees);
        printf("Result : %d\n", s[1].total_marks);
    }
    else if(s[2].total_marks>s[1].total_marks)
    {
        printf("%s\n",s[2].name);
        printf("Roll number : %d\n", s[2].roll_no);
        printf("Section : %c\n",s[2].section);
        printf("Department : %s\n",s[2].dept);
        printf("Fees : %.2f\n", s[2].fees);
        printf("Result : %d\n", s[2].total_marks);
    }
    return 0;
}
