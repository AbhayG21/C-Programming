#include <stdio.h>
int main()
{
    int n;
    printf("Enter the No. of digits: ");
    scanf("%d", &n);
    int sum = 0;

    for (int x = 1; x <= n; x++)
    {
        int a;
        scanf("%d", &a);
        sum += a;
    }
    printf("Sum = %d", sum);
}