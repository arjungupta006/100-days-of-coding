//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>

int main() {
    int nums1[1000], n;
    int i;
    printf("Enter the number of elements in the array: ");  
    scanf("%d", &n);    
    printf("Enter the elements of the array: ");    
    for(i = 0; i < n; i++) {
        scanf("%d", &nums1[i]);
    }   
    int seen[1000] = {0};   
    for(i = 0; i < n; i++) {
        if(seen[nums1[i]] == 1) {
            printf("The repeated element is: %d\n", nums1[i]);
            break;
        }
        seen[nums1[i]] = 1;
    }
                                    
    return 0;
}