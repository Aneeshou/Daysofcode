// Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/ 
#include <stdio.h>
int main()
{
    char alp;
        printf("Enter an alphabet: ");
        scanf("%c",&alp);
        if (alp='a','e','i','o','u'){
            printf("Given alphabet is a VOWEL.\n");
} else {
            printf("Given alphabet is a CONSONANT.\n");}
            return 0;


}
