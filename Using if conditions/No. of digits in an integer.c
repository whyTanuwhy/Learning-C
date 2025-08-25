#include <stdio.h>

int noofdigits(int n)
{
    if(n == 0)
    return 1; 
    int count = 0;
    while(n > 0)
    {
        n /= 10;
        count++;
    }
    return count;
}

int main()
{
    int n;
    printf("enter an integer - ");
    scanf("%d", &n);
    printf("no. of digits is %d", noofdigits(n));
    return 0;
}