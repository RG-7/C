// 8. Input A and b from user and print Sum of A and B to the user.
#include<stdio.h>
int main(){
    int a,b,sum=0;
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);
    sum = a + b;
    printf("Sum of A & B is : %d",sum);
    return 0;
}