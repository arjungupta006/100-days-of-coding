Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>

int main() {
    int number, is_prime = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number <= 1) {
        is_prime = 0;
    } else {
        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }
    return 0;
}