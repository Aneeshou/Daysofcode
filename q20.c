// Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/
#include<stdio.h>
int main(){
    int day;
 printf("Enter a number b/w 1-7:  ");
    scanf("%d",&day);
switch (day) {
        case 1:
            printf(" %d is Sunday", day);
            break;
        case 2:
            printf(" %d is Monday.\n", day);
            break;
        case 3:
            printf(" %d is Tuesday.\n", day);
            break;
        case 4:
            printf(" %d is Wednesday.\n", day);
            break;
        case 5:
            printf("%d is Thursday.\n", day);
            break;
        case 6:
            printf("%d is Friday.\n", day);
            break;
        case 7:
            printf("%d is Saturday.\n", day);
            break;
        default:
            printf("Please enter a number between 1 and 7");}

    return 0;
}