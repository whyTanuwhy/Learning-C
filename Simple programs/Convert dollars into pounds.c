#include <stdio.h>

float dollars, rupees, pounds;

int main(){
    printf("Enter the number of dollars -  ");
    scanf("%f", &dollars);
    rupees = dollars*48;
    pounds = rupees/70;
    printf("%f USD is %f Pounds",dollars, pounds);
}

