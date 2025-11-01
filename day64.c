//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>

int main() {
    char s[1000];
    printf("Enter the string: ");   
    scanf("%s", s);
    int maxLength = 0;
    int start = 0;
    int index[256] = { -1 }; 
    for (int i = 0; s[i] != '\0'; i++) {
        if (index[(unsigned char)s[i]] >= start) {
            start = index[(unsigned char)s[i]] + 1;
        }
        index[(unsigned char)s[i]] = i;
        int currentLength = i - start + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }
    printf("Length of the longest substring without repeating characters: %d\n", maxLength);


    return 0;
}