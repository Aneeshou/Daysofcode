//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; //target is found
        }
    }
    return -1; //target is not found
}

int main() {
    int arr[] = {10, 5, 20, 15, 30, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    printf("Enter the element to search: ");
    scanf("%d", &target);
    int result = linearSearch(arr, size, target);
    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.", target);
    }
    return 0;
}