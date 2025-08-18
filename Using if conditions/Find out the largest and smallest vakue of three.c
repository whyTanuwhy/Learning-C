#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter first number - ");
    scanf("%d",&a);
    printf("Enter second number - ");
    scanf("%d",&b);
    printf("Enter third number - ");
    scanf("%d",&c);

    if (a > b && a > c) {
        printf("largest- %d\n", a);
        if(b==c)
        printf("smallest are two numbers 2nd and 3rd- %d\n", b);
    }
    else if (b > a && b > c) {
        printf("largest- %d\n", b);
        if(a==c)
        printf("smallest are two numbers 1st and 3rd- %d\n", a);
    }
    else if (c > a && c > b) {
        printf("largest- %d\n", c);
        if(a==b)
        printf("smallest are two numbers 1st and 2nd- %d\n", a);
    }
    if (a < b && a < c) {
        printf("smallest- %d\n", a);
        if (b==c)
        printf("largest are two numbers 2nd and 3rd- %d\n", b);
    }
    else if (b < a && b < c) {
        printf("smallest- %d\n", b);
        if (a==c)
        printf("largest are two numbers 1st and 3rd- %d\n", a);
    }
    else if(c < a && c < b) {
        printf("smallest- %d\n", c);
        if (a==b)
        printf("largest are two numbers 1st and 2nd- %d\n", a);
    }
    if (a == b && b == c) {
        printf("all numbers are equal\n");
    } 

}