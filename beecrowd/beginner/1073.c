
// Even Square

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        if (i%2 == 0)
        {
            printf("%d^%d = %d\n",i,2,i*i);
        }
        
    }
    return 0;
}