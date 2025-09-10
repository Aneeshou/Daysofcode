
// Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    int number, reverse = 0, original, rem;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;
    while (number != 0) {
        rem = number % 10;
        reverse = reverse * 10 + rem;
        number = number / 10;
    }
    if (original == reverse) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }
    return 0;
}