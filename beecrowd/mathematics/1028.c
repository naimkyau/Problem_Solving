
// Collectable Cards

#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int time, x, y;
    scanf("%d", &time);
    
    while (time--) {
        scanf("%d %d", &x, &y);
        
        int gcd_val = gcd(x, y);
        
        int lcm = (x * y) / gcd_val;
        
        printf("%d\n", (x * y) / lcm);
    }

    return 0;
}