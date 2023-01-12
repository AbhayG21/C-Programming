#include <stdio.h>
void Addition(int n, int sum);
int main()
{
    int s;
    int sum = 0;
    printf("Enter No. of Elements:");
    scanf("%d", &s);
    Addition(s, sum);
}
void Addition(int n, int sum)
{
    if (n == -1)
    {
        printf("Sum:%d", sum);
        return;
    }
    else
    {
        sum += n;
        return Addition(n - 1, sum);
    }
    return 0;
}