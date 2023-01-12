// Rules for writing variables:
//     a: Variables are case sensitive
//     b: 1st character is alphabet or '-'
//     c: no comma/blank space
//     d: No other symbol other than '-'
#include <stdio.h>
#include <math.h>
int main()
{    

    int s=20;
    int *ptr=&s;
    printf("%u",&ptr);
}