//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    int row_sums[rows];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        int current_row_sum = 0;
        for (int j = 0; j < cols; j++) {
            current_row_sum += matrix[i][j];
        }
        row_sums[i] = current_row_sum;
    }
    printf("\nRow sums:\n");
    for (int i = 0; i < rows; i++) {
        printf("Sum of row %d = %d\n", i + 1, row_sums[i]);
    }
    return 0;
}