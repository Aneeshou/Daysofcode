//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void printInitials(char *name) {
    int i = 0;
    if (strlen(name) > 0 && isalpha(name[0])) {
        printf("%c", toupper(name[0]));
    }
    while (name[i] != '\0') {
        if (isspace(name[i])) {
            while (isspace(name[i]) && name[i] != '\0') {
                i++;
            }
            if (name[i] != '\0' && isalpha(name[i])) {
                printf("%c", toupper(name[i]));
            }
        }
        i++;
    }
    printf("\n");
}
int main() {
    char name[100];
    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;
    printf("The initials are: ");
    printInitials(name);
    return 0;
}