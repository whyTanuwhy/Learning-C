#include <stdio.h>

int rev(int n)
{
    int reversed = 0;
    while(n > 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return reversed;
}

int main()
{
    int n;
    printf("enter an integer - ");
    scanf("%d", &n);
    printf("reversed number is %d", rev(n));
    return 0;
}