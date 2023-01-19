// Rules for writing variables:
//     a: Variables are case sensitive
//     b: 1st character is alphabet or '-'
//     c: no comma/blank space
//     d: No other symbol other than '-'
#include <stdio.h>
#include <math.h>
int b;

void checkTri(int a,int b,int c)
{
    if(a+b>c && b+c>a && a+c>b)
    { 
        printf("Valid");
        return;
    }
    
    printf("Invalid");
    return;
};

void checkTriA(int a,int b,int c)
{
    if(a+b+c==180)
    {
        printf("Valid");
        return;
    }
    else
    {
        printf("Invalid");
        return;
    }
}

void checkChar(char d)
{
    if (d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u')
    {
        printf("Vowel");
        return;
    }
    else
    {
        printf("Consonant");
        return;
    }
}

void checkQuad(int a,int b,int c,int d)
{
    if(a==b==c==d)
    {
        printf("Square");
        return;
    }

    else if(a==b && c==d)
    {
        printf("Rectangle");
        return;
    }
    else if (a == c && b == d)
    {
        printf("Rectangle");
        return;
    }
    else if (a == d && b == c)
    {
        printf("Rectangle");
        return;
    }
    else
    {
        printf("polygon");
        return;
    }
}

void checkPrime(int n)
{
    if(n==0 || n==1) 
    {
        printf("Not Prime");
        return;
    }

    else if(n==2)
    {
        printf("Prime");
        return;
    }
    else
    {
        for(int x=2;x<n;x++)
        {
            if(n%x==0) 
            {
                printf("Not prime");
                return;
            }
        }
        printf("Prime");
        return;
    }
}
int main()
{
    int a, b, c;
    // printf("Enter the sidess: ");
    // scanf("%d %d %d", &a, &b, &c);
    // checkTri(a, b, c);

    // printf("Enter the angles: ");
    // scanf("%d %d %d", &a, &b, &c);
    // checkTriA(a, b, c);

    // char d;
    // printf("Enter the Character:");
    // scanf("%c",&d);
    // checkChar(d);

    // int w,x,y,z;
    // printf("Enter the sides: ");
    // scanf("%d %d %d %d", &w, &x, &y,&z);
    // checkQuad(w,x,y,z);

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    checkPrime(n);

}
