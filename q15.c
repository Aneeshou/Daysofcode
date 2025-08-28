// Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
     if (ch >= 'A' && ch <= 'Z') {
        printf("character '%c' is an uppercase alphabet.", ch);}
        else if (ch >= 'a' && ch <= 'z') {
        printf("character '%c' is a lowercase alphabet.", ch);}
         else if (ch >= '0' && ch <= '9') {
        printf("character '%c' is a digit.", ch);
    }
     else {
        printf("character '%c' is a special character.", ch);
    }

    return 0;
}
