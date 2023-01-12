#include <stdio.h>
int main()
{
    float a, b;
    printf("First No.: ");
    scanf("%f", &a);
    printf("Second No.: ");
    scanf("%f", &b);
    if (a > b)
    {
        printf("Greatest: %f", a);
    }
    else if (b > a)
    {
        printf("Greatest: %f", b);
    }
    else
        printf("Both are equal");
    return 0;
}
