// Work 1
/*
   10. Write a program to calculate perimeter of rectangle. Take sides, a & b, from the user.
*/
#include<stdio.h>
int main(){
    int a,b,perimeter;
    printf("Enter the value of side a : ");
    scanf("%d",&a);
    printf("Enter the value of side b : ");
    scanf("%d",&b);
    perimeter = 2 * ( a + b ) ;
    printf("Enter the value of perimeter of rectangel is  : %d",perimeter);
    return 0;
}