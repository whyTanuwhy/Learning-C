#include <stdio.h>

float grams, kilos;

int main(){
    printf("Enter the number of grams -  ");
    scanf("%f", &grams);
    kilos = grams/1000;
    printf("%f grams is %f kilograms",grams, kilos);
}

