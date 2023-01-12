#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int fac;
    for (int z = a; z > 0; z--)
    {
        fac *= z;
    }
    printf("%d", fac);
    return 0;
}