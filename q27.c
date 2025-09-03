// Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include<stdio.h>
int main() {
    int n,s;
     printf("Enter the number of odd terms: ");
    scanf("%d",&n);
    s= n *n;
     printf("The sum of the first %d odd numbers is: %d",n,s);
    return 0;
}
