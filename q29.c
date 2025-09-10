// Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>
int main() {
    int n,f;
     printf("Enter a number: ");
    scanf("%d", &n);
     for (int i = 1; i <= n; i++) {
           
        printf("Factorial of %d is %d ",n, i);}
    return 0;
}