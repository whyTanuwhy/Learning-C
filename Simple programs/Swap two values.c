#include<stdio.h>

int a,b,c;

int main(){
    printf("Enter the first number - ");
    scanf("%d", &a);
    printf("Enter the second number -  ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("first number is now %d and second number is %d", a, b);
}