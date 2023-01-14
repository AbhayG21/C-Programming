#include <stdio.h>

struct vector
{
    int x;
    int y;
};

void calcSum(struct vector v1, struct vector v2, struct vector sum)
{
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("Sum of x is:%d\n",sum.x);
    printf("Sum of y is:%d\n", sum.y);
}

int main()
{
    int x,y;
    printf("Enter the coordinates of 1st vector:-\n");
    printf("x:");
    scanf("%d",&x);
    printf("y:");
    scanf("%d", &y);
    struct vector v1 = {x, y};

    printf("Enter the coordinates of 2nd vector:-\n");
    printf("x:");
    scanf("%d", &x);
    printf("y:");
    scanf("%d", &y);
    struct vector v2 = {x,y};

    struct vector sum = {0};

    calcSum(v1,v2,sum);
    return 0; 
}