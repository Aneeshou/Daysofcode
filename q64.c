//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number < 0) {
        number =-number;
    }
    int frequency[10] = {0};
    if (number == 0) {
        printf("The most frequent digit is: 0\n");
        return 0;
    }
    while (number > 0) {
        int digit = number % 10;
        frequency[digit]++;     
        number /= 10;          
    }
    int maxFrequency = -1;
    int mostFrequentDigit = -1;
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > maxFrequency) {
            maxFrequency = frequency[i];
            mostFrequentDigit = i;
        }
    }
    printf("The most frequent digit is: %d\n", mostFrequentDigit);
    return 0;
}