#include <stdio.h>

int a,b,c,avg;

int main() {
    printf("Enter first number - ");
    scanf("%d",&a);
    printf("Enter second number - ");
    scanf("%d",&b);
    printf("Enter third number - ");
    scanf("%d",&c);

    avg = (a+b+c)/3;

    if(a<=100 && b<=100 && c<=100) 
    {
        printf("The average of the three numbers is: %d\n", avg);
        if (avg>=70&& avg<=100) {
            printf("the student has achieved distinction\n");
        }
        else if (avg>=60 && avg<70){
            printf("the student has achieved first class\n");
        }
        else if (avg>=50 && avg<60){
            printf("the student has second class\n");
        }
        else if (avg>=35 && avg<50){
            printf("the student has achieved 3rd class\n");
        }
        else if(avg<35){
            printf("the student has failed as atleast 35 average marks are required\n");
        }
    }
    else {
        printf("invalid marks\n");
    }
    return 0;
}
