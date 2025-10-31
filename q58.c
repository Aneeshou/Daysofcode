//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include <stdio.h>
void findMinMax(int arr[], int n, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}
int main() {
    int arr[] = {12, 5, 8, 20, 3, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min_val, max_val;
    findMinMax(arr, n, &min_val, &max_val);
    printf("Minimum : %d\n", min_val);
    printf("Maximum : %d", max_val);
    return 0;
}