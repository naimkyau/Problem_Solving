
// Six Odd Numbers

#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    for (int i = n; i > 0; i++) {
        if (i%2 != 0)
        {
            printf("%d\n",i);
            count++;
            if (count == 6)
                break;
        }
    }
    return 0;
}