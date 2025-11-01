//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/
#include <stdio.h>

int main() {
    int nums1[1000], n;
    int i, total_sum, array_sum;    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &nums1[i]);
    }
    total_sum = n * (n + 1) / 2;
    array_sum = 0;
    for(i = 0; i < n; i++) {
        array_sum += nums1[i];
    }   
    printf("The missing number is: %d\n", total_sum - array_sum); 
    return 0;
}