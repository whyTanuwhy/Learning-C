#include<stdio.h>

float net,gross,discount;

int main() {

    printf("Enter gross sales - ");
    scanf("%f", &gross);

    if (gross > 20000) {
        discount = 0.15*gross;
        net = gross - discount;
        printf("Net sales after discount is-  %f\n", net);
    } else if (gross > 10000 && gross <= 20000) {
        discount = 0.1*gross;
        net = gross - discount;
        printf("Net sales after discount is: %f\n", net);
    } else {
        discount = 0.05*gross;
        net = gross - discount;
        printf("Net sales after discount is: %f\n", net);
    }

    return 0;
}