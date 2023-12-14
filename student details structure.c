#include <stdio.h>
struct student
{
    char name[100];
    int rn;
    float cgpa;
};
int main()
{
    struct student a[100];
    int n;
    printf("Enter number of students\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the details of student-%d\n", i + 1);
        printf("Enter name\n");
        scanf("%s", &a[i].name);
        printf("Enter roll number\n");
        scanf("%d", &a[i].rn);
        printf("Enter cgpa\n");
        scanf("%f", &a[i].cgpa);
    }
    printf("\nYOU ENTERD DETAILS\n");
    printf("NAME    NO.  CGPA\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t%d\t%f\n", a[i].name, a[i].rn, a[i].cgpa);
    }
}