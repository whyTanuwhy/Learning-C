#include<stdio.h>

float net,gross,allowance,deduction;

int main(){
    printf("Enter the gross salary -  ");
    scanf("%f",&gross);
    printf("Allowance are what percentage of gross salary -  ");
    scanf("%f",&allowance);
    allowance = gross*(allowance/100);
    printf("deductions are what percentage of gross salary -  ");
    scanf("%f",&deduction);
    deduction = gross*(deduction/100);
    net = gross+allowance-deduction;
    printf("The net salary is %f", net);
}