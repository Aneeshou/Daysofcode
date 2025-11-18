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
void diagonalTraversal(int matrix[][4], int rows, int cols) {
    for (int line = 0; line < rows + cols - 1; line++) {
        int startRow = (line < cols) ? 0 : line - cols + 1;
        int startCol = (line < cols) ? line : cols - 1;
        while (startRow < rows && startCol >= 0) {
            printf("%d ", matrix[startRow][startCol]);
            startRow++;
            startCol--;
        }
        printf("\n");
    }
}
int main() {
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int rows = 3;
    int cols = 4;
    printf("Diagonal Traversal of the matrix:\n");
    diagonalTraversal(matrix, rows, cols);
    return 0;
}