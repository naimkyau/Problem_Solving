
// Basic Data Types

#include <stdio.h>

int main() {
    int _int;
    long long _long;
    char _char;
    float _float;
    double _double;

    scanf("%d", &_int);
    scanf("%lld", &_long);
    scanf(" %c", &_char);
    scanf("%f", &_float);
    scanf("%lf", &_double);

    printf("%d\n",_int);
    printf("%lld\n",_long);
    printf("%c\n",_char);
    printf("%.2f\n",_float);
    printf("%.1lf",_double);
    return 0;
}