// Write a program to calculate an electricity bill based on units consumed.

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹950

Input 3:
250
Output 3:
Bill: ₹2200

*/
#include<stdio.h>
int main()
{
    int unit,bill;
    printf("Enter the units consumed: ");
    scanf("%d",&unit);
    if (unit<=50) {bill=unit*2;
    }
    else 
    {bill= 50+ unit*4;
    }
    printf("Electricity bill is Rs %d",bill);



}