
// Bhaskara's Formula

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if ((b*b) < (4.0*a*c)|| a == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %.5lf\n",(-b + (sqrt((b*b)-(4*a*c))))/(2*a));
        printf("R2 = %.5lf\n",(-b - (sqrt((b*b)-(4*a*c))))/(2*a));
    }
    return 0;
}