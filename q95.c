//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int areRotations(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2) {
        return 0;
    }
    char *temp = (char *)malloc(sizeof(char) * (2 * len1 + 1));
    if (temp == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    strcpy(temp, str1);
    strcat(temp, str1);
    if (strstr(temp, str2) != NULL) {
        free(temp);
        return 1;
    } else {
        free(temp);
        return 0;
    }
}
int main() {
    char str1[] = "ABACD";
    char str2[] = "CDABA";
    char str3[] = "ABCDE";
    char str4[] = "EDCBA";
    if (areRotations(str1, str2)) {
        printf("\"%s\" and \"%s\" are rotations of each other.\n", str1, str2);
    } else {
        printf("\"%s\" and \"%s\" are NOT rotations of each other.\n", str1, str2);
    }
    if (areRotations(str3, str4)) {
        printf("\"%s\" and \"%s\" are rotations of each other.\n", str3, str4);
    } else {
        printf("\"%s\" and \"%s\" are NOT rotations of each other.\n", str3, str4);
    }
    return 0;
}
