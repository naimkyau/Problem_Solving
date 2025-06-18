// Sum of Consecutive Odd Numbers I

#include <stdio.h>

int main() {
    int a, b, p1, p2, sum = 0;
    scanf("%d %d", &a, &b);
    p1 = (a>b)?a:b;
    p2 = (a<b)?a:b;
    for (int i = p2+1; i < p1; i++) {
        if (i%2 != 0)
        {
            sum+=i;
        }
    }
    printf("%d\n",sum);
    return 0;
}