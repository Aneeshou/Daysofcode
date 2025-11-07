//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }
}
int main() {
    int arr1[] = {1, 3, 5, 7};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[size1 + size2];

    mergeArrays(arr1, size1, arr2, size2, merged);

    printf("Merged Array: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}