// Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/
#include <stdio.h>

int main()
{
    struct Date
    {
        int day;
        int month;
        int year;
    };
    struct Employee
    {
        char name[50];
        int id;
        struct Date joiningDate;
    };
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct Employee employees[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter name, ID and joining date (DD MM YYYY) of employee %d: ", i + 1);
        scanf("%s %d %d %d %d", employees[i].name, &employees[i].id, &employees[i].joiningDate.day, &employees[i].joiningDate.month, &employees[i].joiningDate.year);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n", employees[i].name, employees[i].id, employees[i].joiningDate.day, employees[i].joiningDate.month, employees[i].joiningDate.year);
    }

    return 0;
}