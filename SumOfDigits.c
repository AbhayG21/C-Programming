#include <stdio.h>

int main()
{
    int n;
    printf("Enter the No.: ");
    scanf("%d", &n);
    int sum = 0;
    int r;
    while (n > 0)
    {
        r = n % 10;
        sum += r;
        n = n / 10;
    }
    printf("%d\n", sum > 20 ? 1 : 0);
    printf("Sum = %d", sum);
    return 0;
}