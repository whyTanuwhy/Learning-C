#include<stdio.h>

float gross,deduct, allowance;

int main() {

printf("enter gross salary- ");
scanf("%f", &gross);
if ( gross >10000){
    allowance = 0.1*gross;
    deduct = 0.03*gross;
    printf("net salary is %f", gross + allowance - deduct);
}
else if( gross>= 5000 && gross<10000){
    allowance = 0.07*gross;
    deduct = 0.02*gross ;
    printf("net salary is %f",gross + allowance - deduct);
}
else {
    printf("gross salary must be atleast 5000");
}
}
