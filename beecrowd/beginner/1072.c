
// Interval 2

#include <stdio.h>

int main() {
    int t, n, in = 0, out = 0;
    scanf("%d", &t);
    for (int time = 0; time < t; time++) {
        scanf("%d", &n);
        if (n >= 10 && n <= 20)
        {in++;}
        else 
        {out++;}
    }
    printf("%d in\n",in);
    printf("%d out\n",out);
    return 0;
}