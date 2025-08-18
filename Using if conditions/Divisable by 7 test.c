#include<stdio.h>

int number ;

int main(){
printf("enter number to check divisiblity with 7 -");
scanf("%d",&number);
if (number%7==0){
    printf("entered number is divisible by 7");
}
else{
    printf("entered number is not divisible by 7");
}
return 0;
}