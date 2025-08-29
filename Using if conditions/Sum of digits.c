#include <stdio.h>

int n,i=0;

int sumofdigits(){
    while(n>0){
        i=i+n%10;
        n/=10;
    }
    return i;
}

int main(){
    printf("enter a number - ");
    scanf("%d",&n);
    printf("the sum of digits is - %d",sumofdigits());
}
