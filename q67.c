//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>
void insertElement(int arr[], int *size, int element, int position) {
    if (position < 0 || position > *size) {
        printf("Invalid position for insertion.\n");
        return;
    }
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    (*size)++;
}
int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int currentSize = 5;
    int elementToInsert = 25;
    int insertionPosition = 2;
    printf("Array before insertion: ");
    for (int i = 0; i < currentSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    incertElement(arr, &currentSize, elementToInsert, insertionPosition);
    printf("Array after insertion: ");
    for (int i = 0; i < currentSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
