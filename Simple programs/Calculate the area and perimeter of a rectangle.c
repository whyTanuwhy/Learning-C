#include <stdio.h>

float length, breadth, area, perimeter;

int main(){
    printf("Enter the length of square -  ");
    scanf("%f", &length);
    printf("Enter the bredth of square -  ");
    scanf("%f", &breadth);
    perimeter=2*(length+breadth);
    area=length*breadth;
    printf("%f is the perimeter and %f is the area of the rectanlge with %f length and %f breadth",perimeter,area,length, breadth);
}

