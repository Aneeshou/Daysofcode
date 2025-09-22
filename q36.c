// Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}
int main() {
    int num1, num2;
    printf("Enter 2 number: ");
    scanf("%d %d", &num1, &num2);
    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive number");
        return 1;
    }
    printf("The HCF (GCD) of %d and %d is %d ", num1, num2, gcd(num1, num2));
    return 0;
}