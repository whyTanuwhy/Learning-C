#include<stdio.h>

int m1, m2, m3;

int main() {
    printf("Enter marks of first subject-");
    scanf("%d", &m1);
    printf("Enter marks of second subject - ");
    scanf("%d", &m2);
    printf("Enter marks of third subject- ");
    scanf("%d", &m3);
    float average = (m1 + m2 + m3) / 3.0;
    printf("The average of the three subjects is - %f\n", average);
}