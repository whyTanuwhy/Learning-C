#include <stdio.h>

double bytes,kb,mb,gb;

int main(){
    printf("Enter the number of bytes -  ");
    scanf("%lf", &bytes);
    kb = bytes/1024;
    mb = kb/1024;
    gb = mb/1024;
    printf("%lf bytes is %lf kb, %lf mb, %lf gb",bytes, kb, mb, gb);
}

