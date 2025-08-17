#include <stdio.h>

int hours, minutes;

int main(){
    printf("Enter the number of hours -  ");
    scanf("%d", &hours);
    minutes = hours*60;
    printf("The number of minutes in %d hours is %d",hours, minutes);
}

