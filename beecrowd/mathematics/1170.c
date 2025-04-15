
// Blobs

#include <stdio.h>

int main() {
    int time;
    double a;
    scanf("%d", &time);
    while (time--) {
        scanf("%lf", &a);
        int days = 0;

        while (a > 1.0) {
            a = a / 2.0;
            days++;
        }

        printf("%d dias\n", days);
    }
    return 0;
}