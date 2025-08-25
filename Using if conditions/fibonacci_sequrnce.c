#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of terms-  ");
    scanf("%d", &n);
    int a = 0;
    int b = 1;

    if(n <= 0)
    {
        printf("error - input must be > 0");
    }
    else 
    {
    printf("fibonacci sequence of %d terms -", n);
    for(int i=1; i<=n; i++)
    {
        printf("%d ", a);
        int c = a + b;
        a = b;
        b = c;
    }
    }
    return 0;
}