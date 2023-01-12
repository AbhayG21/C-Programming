#include <stdio.h>
int main()
{
    float a, b, c;
    printf("First No.: ");
    scanf("%f", &a);
    printf("Second No.: ");
    scanf("%f", &b);
    printf("Third.: ");
    scanf("%f", &c);

    if (a > b)
    {
        printf("Greatest: ");
        if (a > c)
            printf("%f", a);
        else
            printf("%f", c);
    }
    else if (b > a)
    {
        printf("Greatest: ");
        if (b > c)
            printf("%f", b);
        else
            printf("%f", c);
    }

    else if (c > a)
    {
        printf("Greatest: ");
        if (c > b)
            printf("%f", c);
        else
            printf("%f", b);
    }
    else
        printf("All three are equal");
}
