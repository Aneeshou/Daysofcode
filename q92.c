//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
#include <string.h>
char findFirstRepeatingChar(const char *str) {
    int char_counts[26] = {0}; 
    for (int i = 0; str[i] != '\0'; i++) {
        char current_char = str[i];
        if (current_char >= 'a' && current_char <= 'z') {
            char_counts[current_char - 'a']++;
            if (char_counts[current_char - 'a'] == 2) {
                return current_char;
            }
        }
    }
    return '\0'; 
}
int main() {
    char str1[] = "programming";
    char result1 = findFirstRepeatingChar(str1);
    if (result1 != '\0') {
        printf("First repeating char in \"%s\": %c\n", str1, result1);
    } else {
        printf("No repeating char found in \"%s\"\n", str1);
    }
    char str2[] = "abcdefg";
    char result2 = findFirstRepeatingChar(str2);
    if (result2 != '\0') {
        printf("First repeating char in \"%s\": %c\n", str2, result2);
    } else {
        printf("No repeating char found in \"%s\"\n", str2);
    }
    char str3[] = "hello";
    char result3 = findFirstRepeatingChar(str3);
    if (result3 != '\0') {
        printf("First repeating char in \"%s\": %c\n", str3, result3);
    } else {
        printf("No repeating char found in \"%s\"\n", str3);
    }
    return 0;
}