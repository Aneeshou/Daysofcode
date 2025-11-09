//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>
void insertSorted(int arr[], int *n, int value, int capacity) {
    if (*n >= capacity) {
        printf("Error: Array is full. Cannot insert more elements.\n");
        return;
    }
    int i = *n - 1;
    while (i >= 0 && arr[i] > value) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = value;
    (*n)++;
}
int main() {
    int arr[10] = {10, 20, 30, 50, 60};
    int n = 5;
    int capacity = 10;
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int valueToInsert = 40;
    insertSorted(arr, &n, valueToInsert, capacity);
    printf("Array after inserting %d: ", valueToInsert);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    valueToInsert = 5;
    insertSorted(arr, &n, valueToInsert, capacity);
    printf("Array after inserting %d: ", valueToInsert);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}