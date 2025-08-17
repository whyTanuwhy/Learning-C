#include<stdio.h>

float net,gross,discount;

int main(){
    printf("Enter the gross sales -  ");
    scanf("%f",&gross);
    printf("discount are what percentage of gross sales -  ");
    scanf("%f",&discount);
    discount = gross*(discount/100);
    net = gross-discount;
    printf("The net salary is %f", net);
}