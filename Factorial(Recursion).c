#include <stdio.h>
void fac(int n, int Factorial);
int main()
{
    int s;
    int Factorial = 1;
    printf("Enter No. of Elements:");
    scanf("%d", &s);
    fac(s, Factorial);
}
void fac(int n, int Factorial)
{
    if (n == 0)
    {
        printf("Factorial: %d", Factorial);
        return;
    }
    else
    {
        Factorial *= n;
        return fac(n - 1, Factorial);
    }
    return 0;
}