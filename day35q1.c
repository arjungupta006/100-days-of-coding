//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
 #include <stdio.h>
 
 int main() {
        int n, i, k;
        scanf("%d", &n);
        int arr[n];
        for(i = 0; i < n; i++) scanf("%d", &arr[i]);
        scanf("%d", &k);
        
        
        k = k % n;
        
        for(i = 0; i < n / 2; i++) {
            int temp = arr[i];
            arr[i] = arr[n - 1 - i];
            arr[n - 1 - i] = temp;
        }
        
        for(i = 0; i < k / 2; i++) {
            int temp = arr[i];
            arr[i] = arr[k - 1 - i];
            arr[k - 1 - i] = temp;
        }
        
      
        for(i = k; i < (n + k) / 2; i++) {
            int temp = arr[i];
            arr[i] = arr[n - 1 - (i - k)];
            arr[n - 1 - (i - k)] = temp;
        }
        
        for(i = 0; i < n; i++) printf("%d ", arr[i]);  
    return 0;
 }