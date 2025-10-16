//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>
int main() {
    int n, i;
   float sum = 0;
    int numerator = 1;
    int denominator = 1;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1.0; 
        } else {
            numerator = (2 * i) - 1; //numerators odd
            denominator = 2 * i - 2; //denominators even
            sum += (double)numerator / denominator;
        }
    }
    printf("Sum of the series up to %d terms: %f\n", n, sum);
    return 0;
}