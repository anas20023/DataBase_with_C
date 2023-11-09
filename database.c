#include<stdio.h>

typedef struct student
{
    char name[300];
    int roll;
    float cgpa;
} db;

int main()
{
    FILE *ptr;
    ptr =fopen("student_database.txt","w");

    int n;
    printf("Enter Student Number:");
    scanf("%d",&n);
    getchar();

    db stu[n];

    for(int i =0 ; i<n ; i++)
    {
        printf("------------------------------------\n");
        printf("Enter %d th Student Name:",i+1);
        scanf("%[^\n]",&stu[i].name);
        getchar();

        printf("Enter %d th Sudent's Roll:",i+1);
        scanf("%d",&stu[i].roll);
        getchar();

        printf("Enter %d th Student's CGPA:",i+1);
        scanf("%f",&stu[i].cgpa);
        getchar();
    }

    for(int i =0 ; i<n ; i++)
    {
        fprintf(ptr,"%d th Student's Data\n\n",i+1);

        fprintf(ptr,"Name: %s\n",stu[i].name);

        fprintf(ptr,"Roll: %d\n",stu[i].roll);

        fprintf(ptr,"CGPA: %0.2f\n",stu[i].cgpa);

        fprintf(ptr,"------------------------------------\n");
    }
    printf("\nData Stored!!!!!!!\nCheck Your Database File!!\n");

}
