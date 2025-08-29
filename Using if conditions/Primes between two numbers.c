#include <stdio.h>

int main(){
    int i,j,n,m,flag;
    printf("enter 1st number - ");
    scanf("%d",&m);
    printf("enter 2nd number - ");
    scanf("%d",&n);
    for(i=m;i<=n;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            flag=0;
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("\n %d is a prime",i);
    }
}
