
// Salary with Bonus

#include <stdio.h>

int main() {
    char name[100];
    double fixedSalary, bonus, total; 
    scanf("%s", name);
    scanf("%lf %lf", &fixedSalary, &bonus);
    total = fixedSalary +((bonus*15)/100);
    printf("TOTAL = R$ %.2lf\n",total);

    return 0;
}