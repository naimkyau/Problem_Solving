
// Sphere

#include <stdio.h>
#include <math.h>

int main() {
    double a, v;
    scanf("%lf", &a);
    v = (a*a*a*3.14159)*(4.0/3);
    printf("VOLUME = %.3lf\n",v);

    return 0;
}