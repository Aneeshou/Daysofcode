//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>
int main() {
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;
    printf("Enter the number of rows (1-100): ");
    scanf("%d", &r);
    printf("Enter the number of columns (1-100): ");
    scanf("%d", &c);
    printf("\nEnter elements of Matrix 1:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter elements of Matrix 2:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nSum of the two matrices:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("%d ", sum[i][j]);
            if (j == c - 1) {
                printf("\n\n");
            }
        }
    }
    return 0;
}