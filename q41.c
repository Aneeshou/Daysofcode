//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include<stdio.h>
#include<math.h>
int main() {
    int num, firstDigit, lastDigit, digitsCount;
    long swappedNum; 
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num >= 0 && num < 10) {
        printf("The number after swapping first and last digit is: %d", num);
        return 0;
    }
    lastDigit = num % 10;
    digitsCount = (int)log10(num);
    firstDigit = num / (int)pow(10, digitsCount);
    swappedNum = lastDigit * (long)pow(10, digitsCount);
    swappedNum += num % (int)pow(10, digitsCount);
    swappedNum -= lastDigit;
    swappedNum += firstDigit;
    printf("The number after swapping first and last digit is: %d", swappedNum);
    return 0;
}