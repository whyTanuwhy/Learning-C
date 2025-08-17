#include <stdio.h>

float dollars, rupees;

int main(){
    printf("Enter the number of rupees -  ");
    scanf("%f", &rupees);
    dollars = rupees/48;
    printf("%f INR is %f USD",rupees, dollars);
}

