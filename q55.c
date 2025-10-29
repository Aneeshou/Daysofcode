//Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include <stdio.h>
int main() {
    int n, i, j, is_prime;
    printf("Enter the upper limit (n): ");
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d are: ", n);
    for (i = 2; i <= n; i++) {
        is_prime = 1; 
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0; 
                break;  
            }
        }
        if (is_prime == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
