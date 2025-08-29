// Write a program to assign grades based on a percentage input.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
#include <stdio.h>
int main() {
    float p;
 printf("Enter the percentage: ");
 scanf("%f", &p);
   if (p >= 90 && p <= 100) {
        printf("Grade A");
    } else if (p >= 80 && p < 90) {
        printf("Grade B");
    } else if (p >= 70 && p < 80) {
        printf("Grade C");
    } else if (p >= 60 && p < 70) {
        printf("Grade D");
    } else if (p >= 0 && p < 60) {
        printf("Grade F");
    } else {
        printf("Please enter a value between 0 and 100.");
    }

    return 0;
}
   