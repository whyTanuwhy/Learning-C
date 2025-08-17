#include <stdio.h>

float radius,area;;

int main(){
    printf("Enter the radius of the ciricle -  ");
    scanf("%f", &radius);
    area=3.14159265*radius*radius;
    printf("%f is the area of a circle with %f radius",area,radius);
}

