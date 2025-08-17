#include <stdio.h>

int a,b,c,d;

int addfunction(){
    printf("Enter first number - ");
    scanf("%d",&a);
    printf("Enter second number -  ");
    scanf("%d",&b);
    c = a+b;
    printf("The sum of those two numbers is %d",c);
}

int subtractfunction(){
    printf("Enter first number - ");
    scanf("%d",&a);
    printf("Enter second number -  ");
    scanf("%d",&b);
    c = a-b;
    printf("The difference of those two numbers is %d",c);
}

int multiplyfunction(){
    printf("Enter first number - ");
    scanf("%d",&a);
    printf("Enter second number -  ");
    scanf("%d",&b);
    c = a*b;
    printf("The product of those two numbers is %d",c);
}

double dividefunction(){
    double a,b,c;
    printf("Enter the numerator - ");
    scanf("%lf",&a);
    printf("Enter the denominator  -  ");
    scanf("%lf",&b);
    c = a / b;
    printf("The division of those two numbers is %lf",c);
}

int main(){
    printf("This is a basic calculator\n");
    printf("Enter 1 if you want to add\n");
    printf("Enter 2 if you want to subtract\n");
    printf("Enter 3 if you want to multiply\n");
    printf("Enter 4 if you want to divife\n");
    scanf("%d",&d);
    if(d==1)
    {
        addfunction();
    }
    if(d==2)
    {
        subtractfunction();
    }
    if(d==3)
    {
        multiplyfunction();
    }
    if(d==4)
    {
        dividefunction();
    }

}

