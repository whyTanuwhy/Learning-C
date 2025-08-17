#include <stdio.h>

float h,b,a;

int main(){
    printf("Enter the height of triangle -  ");
    scanf("%f", &h);
    printf("Enter the length of base of triangle -  ");
    scanf("%f", &b);
    a= (h*b)/2;
    printf("%f is the area of a triangle with height %f and base %f",a,h,b);
}

