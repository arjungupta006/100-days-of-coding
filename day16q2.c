//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>
int main() {
    int n,d,sum=0;
   
    printf("Enter an int... ");
    scanf("%d", &n);
     int temp=n;
    while (n>0)
    {
     d=n%10;
     sum=sum*10+d;
     n=n/10;
    }
    printf("reverse is=%d",sum);
    if(sum==temp)
    {
    printf("palingdrom");
    }
    else
    {
    printf("not");
     }
     return 0;
     }