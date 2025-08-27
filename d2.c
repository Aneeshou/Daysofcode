//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include<stdio.h>

int main()
{
    int l,w,p,a;
    printf("Length of rectangle:");
    scanf("%d",&l);
    printf("Width of rectangle:");
    scanf("%d",&w);
    a=l*w;
    p=2*(l+w);
    printf("Area:%d\n",a);
    printf("Perimeter:%d",p);
return 0;
}
