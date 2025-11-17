//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>
int main() {
    int matrix[10][10];
    int i, j, rows, columns, sum = 0;
    printf("Enter the number of rows and columns for the square matrix: ");
    scanf("%d %d", &rows, &columns);
    if (rows != columns) {
        printf("Error: The matrix must be square.\n");
        return 1; 
    }
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < rows; i++) {
        sum = sum + matrix[i][i];
    }
    printf("The sum of the main diagonal elements is: %d\n", sum);
    return 0; 
}
