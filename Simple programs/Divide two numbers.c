#include <stdio.h>

double a,b,c;

int main(){
    printf("Enter the numerator - ");
    scanf("%lf", &a);
    printf("Enter the denominator  -  ");
    scanf("%lf", &b);
    c = a/b;
    printf("The division of those two numbers is %lf",c);
}

