
// Average 1

#include <stdio.h>

int main() {
    double MEDIA,a, b;
    scanf("%lf %lf", &a, &b);
    MEDIA = (((a*3.5)+(b*7.5))/(3.5+7.5));
    printf("MEDIA = %.5lf\n",MEDIA);
    return 0;
}