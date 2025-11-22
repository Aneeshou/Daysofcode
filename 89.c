//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    char targetChar;
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    str[strcspn(str, "\n")] = 0; 
    printf("Enter the character to find its frequency: ");
    scanf(" %c", &targetChar);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == targetChar) {
            count++;
        }
    }
    printf("Frequency of '%c' in the string is: %d\n", targetChar, count);
    return 0;
}