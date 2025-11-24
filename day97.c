//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>

int main() {
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
    struct Employee emp;
    FILE *file = fopen("employees.dat", "wb");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    printf("Enter employee name, ID and joining date (DD MM YYYY): ");
    scanf("%s %d %d %d %d", emp.name, &emp.id, &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);
    fwrite(&emp, sizeof(struct Employee), 1, file);
    fclose(file);
    file = fopen("employees.dat", "rb");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    struct Employee readEmp;
    fread(&readEmp, sizeof(struct Employee), 1, file);
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n", readEmp.name, readEmp.id, readEmp.joiningDate.day, readEmp.joiningDate.month, readEmp.joiningDate.year);
    fclose(file);
    return 0;
}