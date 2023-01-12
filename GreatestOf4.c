#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int g = a > b ? (a > c ? (a > d ? a : d) : (c > d ? c : d)) : (b > c ? (b > d ? b : d) : (c > d ? c : d));
    if (a == b == c == d)
    {
        printf("All numbers are Equal");
    }
    else
    {
        printf("Greatest: %d", g);
    }

    return 0;
}