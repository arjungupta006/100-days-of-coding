//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!
*/
#include <stdio.h>
int main() {
    enum     UserRole { ADMIN, USER, GUEST };
    enum UserRole role = GUEST; 
    switch (role) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Unknown role\n");
    }   
    return 0;
}