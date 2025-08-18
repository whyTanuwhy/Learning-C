#include<stdio.h>

int a,b;

int main(){
    printf("enter 1st number- ");
    scanf("%d",&a);
    printf("enter 2nd number- ");
    scanf("%d",&b);
    if(a>b){
        printf("larger number is %d\n",a);
        printf("smalle number is %d\n",b);
    } else if(b>a){
        printf("larger number is %d\n",b);
        printf("smalleer number is %d\n",a);
    } else if(a==b) {
        printf("both numbers are equal\n");
    }
    else {
        printf("invalid input\n");
    }
}