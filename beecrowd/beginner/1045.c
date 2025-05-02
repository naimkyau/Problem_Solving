
// Triangle Types

#include <stdio.h>

int main()
{
    double a, b, c, A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    if (A > B && A > C)
    {
        a = A;
        b = B;
        c = C;
    }
    else if (B > A && B > C)
    {
        a = B;
        b = A;
        c = C;
    }
    else
    {
        a = C;
        b = A;
        c = B;
    }
    if (a >= (b + c))
    {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if ((a * a) == ((b * b) + (c * c)))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    if ((a * a) > ((b * b) + (c * c)))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if ((a * a) < ((b * b) + (c * c)))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (a == b && b == c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    
    return 0;
}