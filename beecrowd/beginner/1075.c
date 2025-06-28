
// Remaining 2

#include <stdio.h>

int main() {
    int n,d = 0;
    scanf("%d", &n);
    if (n == 2)
    {
        return 0;
    }
    
    for (int i = 0; d < 10000; i++) {
        d = i*n;
        if (d < 10000)
        {
            printf("%d\n",d+=2);
        }
        
    }
    return 0;
}