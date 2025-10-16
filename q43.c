//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int num, originalNum, remainder;
    long long sumOfFactorials = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;
    while (num > 0) {
        remainder = num % 10;
        sumOfFactorials += factorial(remainder);
        num /= 10;
    }
    if (sumOfFactorials == originalNum) {
        printf("%d is a strong number.", originalNum);
    } else {
        printf("%d is not a strong number.", originalNum);
    }

    return 0;
}