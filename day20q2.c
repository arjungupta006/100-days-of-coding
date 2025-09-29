//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>

int main() {
    int binary, digit, ones_complement = 0, place = 1;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    while (binary > 0) {
        digit = binary % 10;
        if (digit == 0) {
            ones_complement += 1 * place;
        }
        binary /= 10;
        place *= 10;
    }
    printf("1's Complement = %d\n", ones_complement);
    return 0;
}