//Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/
#include <stdio.h>

int main() {
    struct Student {
        char name[50];
        int id;
        int score;
    } student1, student2;   
    printf("Enter details for Student 1 (Name ID Score): ");
    scanf("%s %d %d", student1.name, &student1.id, &
            student1.score);
    printf("Enter details for Student 2 (Name ID Score): ");
    scanf("%s %d %d", student2.name, &student2.id, &
            student2.score);
    if (student1.id == student2.id &&
        student1.score == student2.score &&
        strcmp(student1.name, student2.name) == 0) {
        printf("Same\n");
    } else {
        printf("Different\n");
    }
    return 0;
}   