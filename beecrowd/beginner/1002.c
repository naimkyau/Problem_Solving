
// Area of a Circle

#include <stdio.h>

int main() {
    double r, pi, A;
    scanf("%lf", &r);
    pi = 3.14159;
    A = pi* (r*r);
    printf("A=%.4lf\n",A);
    return 0;
}