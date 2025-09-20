// Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
#include <math.h> 
int main() {
    int num, i, Prime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1) {
        Prime = 0;
    } else if (num == 2) {
        Prime = 1;
    } else if (num % 2 == 0) {
        Prime = 0;
    } else {
                for (i = 3; i <= sqrt(num); i += 2) {
            if (num % i == 0) {
            Prime = 0;
                break;       
            }
        }
    }
    if (Prime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}