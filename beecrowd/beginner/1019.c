
// Time Conversion

#include <stdio.h>

int main() {
    int s, m, h;
    scanf("%d", &s);
    h = s/3600;
    s -= h*3600;
    m = s/60;
    s -= m*60;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}