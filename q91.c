//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>
#include <string.h>
int isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
void removeVowels(char *str) {
    int i, j;
    int len = strlen(str);
    for (i = 0, j = 0; i < len; i++) {
        if (!isVowel(str[i])) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}
int main() {
    char myString[100];
    printf("Enter a string: ");
    fgets(myString, sizeof(myString), stdin);
    myString[strcspn(myString, "\n")] = 0;
    printf("Original string: %s\n", myString);
    removeVowels(myString);
    printf("String after removing vowels: %s\n", myString);
    return 0;
}