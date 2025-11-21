//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>
#include <string.h>
void replaceSpacesWithHyphens(char *str) {
    int i;
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }
}
int main() {
    char myString[] = "This is a sample string with spaces";
    printf("Original string: %s\n", myString);
    replaceSpacesWithHyphens(myString);
    printf("Modified string: %s\n", myString);
    return 0;
}