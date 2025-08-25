#include <stdio.h>

int pal(int n)
{
    int original = n;
    int reversed = 0;
    while(n > 0)
    {
        int digit = n % 10;
        reversed = reversed*10 + digit;
        n /= 10;
    }
    return original == reversed;
}
int main()
{
    int n;
    printf("Enter an integer - ");
    scanf("%d", &n);
    if(pal(n))
    {
        printf("%d is a palindrome", n);
    }
    else
    {
        printf("%d is not a palindrome", n);
    }
    return 0;
}

