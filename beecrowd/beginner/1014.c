
// Consumption

#include <stdio.h>

int main() {
    int km;
    float fuel;
    scanf("%d %f", &km, &fuel);
    printf("%.3f km/l\n",(km/fuel));
    return 0;
}