//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>
int main() {
    int n, i, j, flag = 1;
    scanf("%d", &n);
    int a[n][n];
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            if(a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
    if(flag) printf("True");
    else printf("False");
    return 0;
}
