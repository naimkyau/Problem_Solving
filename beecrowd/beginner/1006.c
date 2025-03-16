
// Average 2

#include <stdio.h>

int main() {
    double MEDIA,a, b,c;
    scanf("%lf %lf %lf", &a, &b, &c);
    MEDIA = (((a*2)+(b*3)+(c*5))/(2+3+5));
    printf("MEDIA = %.1lf\n",MEDIA);
    return 0;
}