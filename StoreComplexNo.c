#include <stdio.h>

struct complex
{
    int real;
    int imaginary;
};

int main()
{
    int real,img;
    printf("Enter the Real part: ");
    scanf("%d", &real);
    printf("Enter the Imaginary part: ");
    scanf("%d", &img);
    struct complex c1 = {real,img};
    struct complex *ptr = &c1;

    printf("Real part:%d\n", (ptr->real));
    printf("Imaginary part:%d\n", (ptr->imaginary));
    printf("Complex number: %d + %di\n",ptr->real,ptr->imaginary);
    return 0;
}