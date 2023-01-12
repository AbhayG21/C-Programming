#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        int e;
        scanf("%d",&e);
        a[i] = e;
    }
    printf("Original Array: ");
    for (int q = 0; q < n; q++)
    {
        printf("%d ", a[q]);
    }
    for (int q = 0; q < n / 2; q++)
    {
        int x = a[q];
        int y = a[n - q - 1];
        a[q] = y;
        a[n - q - 1] = x;
    }

    printf("\nReversed Array: ");
    for (int q = 0; q < n; q++)
    {
        printf("%d ", a[q]);
    }

    return 0;
}