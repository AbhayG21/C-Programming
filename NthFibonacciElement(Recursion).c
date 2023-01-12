#include <stdio.h>
int fib(int n);
int main()
{
    int a;
    printf("Enter the value of n:");
    scanf("%d", &a);
    printf("Fibonacci Element:%d", fib(a));
}

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    int f1 = fib(n - 1);
    int f2 = fib(n - 2);
    int f = f1 + f2;
    return f;
}