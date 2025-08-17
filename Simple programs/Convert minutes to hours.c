#include <stdio.h>

int hours, minutes, minutes2;

int main(){
    printf("Enter the number of minutes -  ");
    scanf("%d", &minutes);
    hours = minutes/60;
    minutes2=minutes%60;
    printf("%d minutes is %d hours and %d minutes", minutes,hours,minutes2);
}

