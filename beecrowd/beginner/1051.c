
// Taxes

#include <stdio.h>

int main() {
    float tax, sumTax = 0, salary;
    scanf("%f", &salary);
    if (salary <= 2000.0)
    {printf("Isento\n");return 0;}
    salary -= 2000;
    tax = (salary > 1000.0) ? 1000.0 : salary;
    sumTax += (tax*8)/100;
    salary -= 1000;
    if (salary <= 0){goto done;}
    tax = (salary > 1500.0) ? 1500.0 : salary;
    sumTax += (tax*18)/100;
    salary -= 1500;
    if (salary <= 0){goto done;}
    tax = salary;
    sumTax += (tax*28)/100;
    done:
    printf("R$ %.2f\n",sumTax);


    

    
    return 0;
}