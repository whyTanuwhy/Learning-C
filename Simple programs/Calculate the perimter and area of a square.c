#include <stdio.h>

float length, area, perimeter;

int main(){
    printf("Enter the length of square -  ");
    scanf("%f", &length);
    perimeter=4*length;
    area=length*length;
    printf("%f is the perimeter and %f is the area of the square with %f length",perimeter,area,length);
}

