
// Factorial Sum

#include <stdio.h>
long long factorial(int x){
    if (x==0 || x==1)
    {
        return 1;
    }
    
    long long fact = 1;
    for (int i = x; i >= 2; i--) {
        fact *=i;
    }
    return fact;
}
int main() {
    int a, b;
    while (scanf("%d %d", &a, &b)!=EOF) {
        long long x, y;
        x = factorial(a);
        y = factorial(b);
        printf("%lld\n",x+y);
        
    }
    return 0;
}