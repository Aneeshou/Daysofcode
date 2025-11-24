//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char sentence[1000];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = 0;
    int maxLength = 0;
    int maxStart = 0;
    int currentLength = 0;
    int currentStart = 0;
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (!isspace((unsigned char)sentence[i])) {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                maxStart = currentStart;
            }
            currentLength = 0;
            currentStart = i + 1;
        }
    }
    if (currentLength > maxLength) {
        maxLength = currentLength;
        maxStart = currentStart;
    }
    printf("Longest word: ");
    for (int i = 0; i < maxLength; i++) {
        printf("%c", sentence[maxStart + i]);
    }
    printf("\n");
    return 0;
}