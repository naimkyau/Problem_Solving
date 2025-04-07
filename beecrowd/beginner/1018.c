
// Banknotes

#include <stdio.h>

int main() {
    int a;
    int count = 0;
    scanf("%d", &a);
    printf("%d\n",a);
    while (a >= 100) {
        a-=100;
        count++;
    }
    printf("%d nota(s) de R$ 100,00\n",count);
    count = 0;
    while (a >= 50) {
        a-=50;
        count++;
    }
    printf("%d nota(s) de R$ 50,00\n",count);
    count = 0;
    while (a >= 20) {
        a-=20;
        count++;
    }
    printf("%d nota(s) de R$ 20,00\n",count);
    count = 0;
    while (a >= 10) {
        a-=10;
        count++;
    }
    printf("%d nota(s) de R$ 10,00\n",count);
    count = 0;
    while (a >= 5) {
        a-=5;
        count++;
    }
    printf("%d nota(s) de R$ 5,00\n",count);
    count = 0;
    while (a >= 2) {
        a-=2;
        count++;
    }
    printf("%d nota(s) de R$ 2,00\n",count);
    count = 0;
    while (a >= 1) {
        a-=1;
        count++;
    }
    printf("%d nota(s) de R$ 1,00\n",count);
    return 0;
}