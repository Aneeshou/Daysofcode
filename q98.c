//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
int main() {
    char name[200];
    char *token;
    char last[50];
    int first = 1;
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';
    char temp[200];
    strcpy(temp, name);
    token = strtok(temp, " ");
    while (token != NULL) {
        strcpy(last, token);
        token = strtok(NULL, " ");
    }
    token = strtok(name, " ");
    while (token != NULL) {
        if (strcmp(token, last) == 0) {
            break;
        }
        printf("%c.", token[0]);
        token = strtok(NULL, " ");
    }
    printf(" %s\n", last);
    return 0;
}
