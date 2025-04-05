
// The Greatest

#include <stdio.h>

int main() {
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);
    if (a>b)
    {
        max = a;
        max = (a<c)?c:a;
        printf("%d eh o maior\n",max);
    }
    else if (b>c)
    {
        max = b;
        max = (a<b)?b:a;
        printf("%d eh o maior\n",max);
    }
    else if (c>a)
    {
        max = c;
        max = (c<b)?b:c;
        printf("%d eh o maior\n",max);
    }
    
    return 0;
}