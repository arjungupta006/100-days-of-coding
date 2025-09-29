/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/ 

#include <stdio.h>

int main() {
    int i, j, rows = 5;
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= rows; j++) {
            if(j == 1 || j == rows || i == 1 || i == rows || i == (rows/2 + 1) || j == (rows/2 + 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}