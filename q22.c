// Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>
int main() {
    float sp,cp,per;
     printf("Enter the Cost Price: ");
    scanf("%f", &cp);
     printf("Enter the Selling Price: ");
    scanf("%f", &sp);
     if (sp > cp) {
        
        per = ((sp-cp)/cp)*100;
        printf("Profit Percentage: %.2f", per);
 } else  if (cp > sp) {
        per = ((cp-sp)/cp) *100;
       printf("Loss Percentage: %.2f", per);
 }
 else {
    printf("no profit and loss");
 }
  return 0;
}