#include <stdio.h>

float p,r,t,i;

int main(){
    printf("Enter the principal amount -  ");
    scanf("%f", &p);
    printf("Enter the rate -  ");
    scanf("%f", &r);
    printf("Enter the time -  ");
    scanf("%f", &t);
    i=p*r*t/100;
    printf("the interest is %f",i);
}

