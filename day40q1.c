//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>
int main() {
    int r, c, i, j, k = 0;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    for(int d = 0; d < r + c - 1; d++) {
        if(d % 2 == 0) {
            for(i = (d < r ? d : r - 1), j = d - i; i >= 0 && j < c; i--, j++)
                printf("%d ", a[i][j]);
        } else {
            for(j = (d < c ? d : c - 1), i = d - j; j >= 0 && i < r; j--, i++)
                printf("%d ", a[i][j]);
        }
    }
    return 0;
}
