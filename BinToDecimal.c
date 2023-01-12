#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int temp = n;
    int r;
    int count = 0;
    int dec = 0;
    while (temp != 0)
    {
        r = temp % 10;
        dec = pow(2, count) * r + dec;
        count++;
        temp /= 10;
    }
    printf("Decimal for %d is %d",n, dec);
    return 0;
}