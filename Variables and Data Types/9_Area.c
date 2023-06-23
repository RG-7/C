// 9. Area of a square where side input is from user
#include<stdio.h>
int main(){
    int side,area;
    printf("Enter the value of side : ");
    scanf("%d",&side);
    area = side * side;
    printf("Area of square is %d",area);
    return 0;
}