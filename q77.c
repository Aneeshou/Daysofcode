//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> 
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
bool areDiagonalElementsDistinct(int **matrix, int size) {
    if (size <= 1) {
        return true;
    }
    int *diagonalElements = (int *)malloc(size * sizeof(int));
    if (diagonalElements == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < size; i++) {
        diagonalElements[i] = matrix[i][i];
    }
    qsort(diagonalElements, size, sizeof(int), compare);
    for (int i = 0; i < size - 1; i++) {
        if (diagonalElements[i] == diagonalElements[i+1]) {
            free(diagonalElements);
            return false;
    }
    free(diagonalElements);
    return true; 
}
int main() {
    int size = 3;
    int **matrix = (int **)malloc(size * sizeof(int *));
    for (int i = 0; i < size; i++) {
        matrix[i] = (int *)malloc(size * sizeof(int));
    }
    matrix[0][0] = 1; matrix[0][1] = 2; matrix[0][2] = 3;
    matrix[1][0] = 4; matrix[1][1] = 5; matrix[1][2] = 6;
    matrix[2][0] = 7; matrix[2][1] = 8; matrix[2][2] = 9;
    if (areDiagonalElementsDistinct(matrix, size)) {
        printf("Example 1: Diagonal elements are distinct.\n");
    } else {
        printf("Example 1: Diagonal elements are NOT distinct.\n");
    }
    matrix[0][0] = 1; matrix[0][1] = 2; matrix[0][2] = 3;
    matrix[1][0] = 4; matrix[1][1] = 1; matrix[1][2] = 6;
    matrix[2][0] = 7; matrix[2][1] = 8; matrix[2][2] = 9;
    if (areDiagonalElementsDistinct(matrix, size)) {
        printf("Example 2: Diagonal elements are distinct.\n");
    } else {
        printf("Example 2: Diagonal elements are NOT distinct.\n");
    }
    for (int i = 0; i < size; i++) {
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}