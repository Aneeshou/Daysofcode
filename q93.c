//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isAnagram(char *str1, char *str2) {
    int count1[256] = {0};
    int count2[256] = {0};
    int i;
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }
    for (i = 0; str1[i] != '\0'; i++) {
        count1[tolower(str1[i])]++;
        count2[tolower(str2[i])]++;
    }
    for (i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            return 0;
        }
    }
    return 1;
}