// Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d;
int r1,r2;
printf("enter 3 coef. :");
scanf("%d,%d,%d",&a,&b,&c);
d=(b*b)-(4*a*c);
if(d==0){printf("roots are equal and real");
r1=r2=-b/(2*a);
printf("root 1 is: %d , root 2 is: %d",r1,r2);}
else if (d>0) {
printf("roots are real");
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
printf("root 1 is:%d , root 2 is: %d",r1,r2);
}
else 
printf("root is imaginary");
return 0;
}