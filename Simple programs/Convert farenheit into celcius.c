#include <stdio.h>

float c, f;

int main(){
    printf("Enter the temperature in farenheit -  ");
    scanf("%f", &f);
    c = (5.0/9)*(f-32);
    printf("%f farenheit is %f celcius",f,c);
}

