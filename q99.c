//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void convertDate(const char *input, char *output) {
    char day[3], month[3], year[5];
    const char *months[] = 
        {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    strncpy(day,   input,     2); day[2] = '\0';
    strncpy(month, input + 3, 2); month[2] = '\0';
    strncpy(year,  input + 6, 4); year[4] = '\0';
    int m = atoi(month);
    sprintf(output, "%s-%s-%s", day, months[m-1], year);
}
int main() {
    char input[] = "23/04/2025";
    char output[20];
    convertDate(input, output);
    printf("Converted: %s\n", output);
    return 0;
}
