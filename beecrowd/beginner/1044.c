
// Multiples

#include <stdio.h>

int main() {
    int a, b, p1, p2;
    scanf("%d %d", &a, &b);
    p1 = (a>b)?a:b;
    p2 = (a<b)?a:b;
    if (p1%p2 == 0)
    {
        printf("Sao Multiplos\n");
    }
    else
    {
        printf("Nao sao Multiplos\n");
    }
    return 0;
}