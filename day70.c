//Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;  
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int new_word = 1;   
    while(str[i] != '\0') {
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            new_word = 1;
        } else {
            if(new_word && str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - ('a' - 'A');
            } else if(!new_word && str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = str[i] + ('a' - 'A');
            }
            new_word = 0;
        }
        i++;
    }
    printf("Sentence case string: %s", str);
        
    return 0;
}