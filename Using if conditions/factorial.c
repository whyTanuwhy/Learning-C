#include <stdio.h>

int main() {
    int n;
    printf("enter a number - ");
    scanf("%d", &n);
    if (n < 0) {
        printf("error - input must be >=0"); 
    }
    if (n == 0 || n == 1) {
        return 1; 
    }
    else {
        for (int i = n-1; i>=2; i--) {
            n *= i; 
        }
    }
    printf("factorial is %d", n);
}