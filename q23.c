// Write a program to calculate a library fine based on late days.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/
#include <stdio.h>

int main() {
    int daysLate,fine;
    printf("Enter the number of days the book is late: ");
    scanf("%d", &daysLate);
     if (daysLate <= 0) {
        fine = 0;
         } else if (daysLate <= 5) {
        fine = daysLate ;
         } else if (daysLate <= 10) {
             fine = 10 + ((daysLate - 5));
              } else {
                fine = 20 + ((daysLate - 10)*5);}
                  printf("The fine for %d days late is Rs %d", daysLate, fine);

    return 0;
}