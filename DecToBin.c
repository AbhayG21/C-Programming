#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int b=0;
    int r;
    int count  = 0;
    int temp = n;
    while(n!=0)
    {
        r = n%2;
        b = pow(10,count)*r + b;
        count++;
        n=n/2;
    }
    printf("Binary for %d is %d",temp, b);
    return 0;
}