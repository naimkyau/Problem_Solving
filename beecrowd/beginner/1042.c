
// Simple Sort

#include <stdio.h>

int main() {
    int a, b, c, p1, p2, p3;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        p1 = a;
        if (b > c)
        {p2 = b; p3 = c;}
        else
        {p2 = c; p3 = b;}
        printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", p3, p2, p1, a, b, c);
    }
    else if (b > a && b > c)
    {
        p1 = b;
        if (a > c)
        {p2 = a; p3 = c;}
        else
        {p2 = c; p3 = a;}
        printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", p3, p2, p1, a, b, c);
    }
    else
    {
        p1 = c;
        if (a > b)
        {p2 = a; p3 = b;}
        else
        {p2 = b; p3 = a;}
        printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", p3, p2, p1, a, b, c);
    }
    
    return 0;
}