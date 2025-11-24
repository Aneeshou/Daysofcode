//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>
void reverse(char* begin, char* end) {
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}
void reverseWords(char* s) {
    char* word_begin = s;
    char* temp = s;
    while (*temp) {
        temp++;
        if (*temp == '\0' || *temp == ' ') {
            reverse(word_begin, temp - 1);
            word_begin = temp + 1;   
        }
    }
}
int main() {
    char sentence[] = "This is a test sentence";
    printf("Original sentence: %s\n", sentence);
    reverseWords(sentence);
    printf("Sentence with reversed words: %s\n", sentence);
    return 0;
}