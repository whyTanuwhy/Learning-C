#include <stdio.h>

int main()
{
    int n;
    printf("enter a number - ");
    scanf("%d", &n);
    if(n <= 0)
    {
        printf("error - input must be >0");
    }
    else
    {
        int a = 0;
        int b = 1;
        int c=0;
        for(int i = 1; i < n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("fibonacci number is %d", a);
    }
}