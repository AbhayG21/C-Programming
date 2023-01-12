#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n<0)
    {
        printf("Number is -ve");
    }
    else if(n==0)
    {
        printf("Number is Zero");
    }
    else
    {
        n%2==0 ? printf("%d is Even",n) : printf("%d is Odd",n);
    }
}