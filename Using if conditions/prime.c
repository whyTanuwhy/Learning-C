#include <stdio.h>

int i,n;

int isprime(int n)
{
    for (i=2;i<n/2;i++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    printf("enter the number - ");
    scanf("%d",&n);
    if (n<=1)
    {
        printf("not a prime number");
    }
    else if (isprime(n))
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }

}

