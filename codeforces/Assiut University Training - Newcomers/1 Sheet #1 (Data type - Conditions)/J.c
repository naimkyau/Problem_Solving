
// Primes from 1 to n

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void oneToN(int n) {
    
    bool isPrime[n + 1];
    for (int i = 0; i <= n; i++) {
        isPrime[i] = true;
    }
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i*i <= n; i++) {
        if (isPrime[i])
        {
            for (int j = i*i; j <= n; j+=i) {
                isPrime[j] = false;
            }
        }
        

    }
    for (int i = 0; i <= n; i++) {
        if (isPrime[i])
        {
            printf("%d ",i);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    oneToN(n);
    return 0;
}


