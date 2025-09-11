// Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>
int main() {
    int number, original, remainder, result = 0, n = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
     while (original != 0) {
        original /= 10;
        n++;
     }
    original = number;
      while (original != 0) {
        remainder = original % 10;
         result += pow(remainder, n);
         original /= 10; }
          if (result == number) {
        printf("%d is an Armstrong number", number);
    } else {
        printf("%d is not an Armstrong number", number);
    }
    return 0;
}