#include <stdio.h>
Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
int main() {
    int n1, n2, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    i = 1;
    while (i <= n1 * n2)
    {
        if (i % n1 == 0 && i % n2 == 0)
        {
            printf("LCM = %d\n", i);
            break;
        }
        i++;
    }
    return 0;
}