//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include <stdio.h>
int main() {
    int arr[] = {10, 25, 32, 47, 58, 61, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int evenCount = 0;
    int oddCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf("Number of even elements: %d\n", evenCount);
    printf("Number of odd elements: %d", oddCount);
    return 0;
}