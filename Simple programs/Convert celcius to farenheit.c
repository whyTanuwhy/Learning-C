#include <stdio.h>

int c, f;

int main(){
    printf("Enter the temperature in celcius -  ");
    scanf("%d", &c);
    f = c*(9/5) + 32;
    printf("%d celcius is %d farenheit",c,f);
}

