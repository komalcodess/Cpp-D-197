#include <stdio.h>

struct Date
{
    int year;
    int month;
    int day;
};

struct Student
{
    char name[50];
    int studentID;
    char standard[30];
    struct Date dob;
    struct Date admission;
};

int calculateAge(struct Date dob, struct Date admission)
{
    int age =admission.year -dob.year;

    if(admission.month<dob.month)
    {
        age--;
    }
    else if(admission.month==dob.month && admission.day< dob.day)
    {
        age--;
    }

    return age;
}

int main()
{
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for(int i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n");

        printf("Student Name: ");
        scanf(" %s", s[i].name);

        printf("Student ID: ");
        scanf("%d", &s[i].studentID);

        printf("Standard/Department: ");
        scanf(" %s", s[i].standard);

        printf("Date of Birth (YYYY MM DD): ");
        scanf("%d %d %d",
              &s[i].dob.year,
              &s[i].dob.month,
              &s[i].dob.day);

        printf("Date of Admission (YYYY MM DD): ");
        scanf("%d %d %d",
              &s[i].admission.year,
              &s[i].admission.month,
              &s[i].admission.day);
    }

    printf("Detailss\n");

    for(int i =0;i< n; i++)
    {
        int age = calculateAge(s[i].dob, s[i].admission);

        printf("\nStudent %d Details\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Student ID: %d\n", s[i].studentID);
        printf("Standard/Department: %s\n", s[i].standard);

        printf("Date of Birth: ",
               s[i].dob.year,
               s[i].dob.month,
               s[i].dob.day);

        printf(" Admission:",
               s[i].admission.year,
               s[i].admission.month,
               s[i].admission.day);

        printf("Age at the Time of Admission: %d years\n", age);
    }

    return 0;
}
