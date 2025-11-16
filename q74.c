//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/
#include <stdio.h>
int main() {
    int originalMatrix[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int rows = 3;
    int cols = 2;
    int transposedMatrix[cols][rows]; 
    printf("Original Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", originalMatrix[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposedMatrix[j][i] = originalMatrix[i][j];
        }
    }
    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transposedMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}