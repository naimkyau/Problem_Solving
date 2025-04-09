
// Banknotes and Coins

#include <stdio.h>

int main() {
    double taka;
    int notas, dec;
    scanf("%lf", &taka);
    dec = (taka*100);
    dec %=100;
    notas = taka/100;
    taka -= notas*100;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",notas);
    notas = taka/50;
    taka -= notas*50;
    printf("%d nota(s) de R$ 50.00\n",notas);
    notas = taka/20;
    taka -= notas*20;
    printf("%d nota(s) de R$ 20.00\n",notas);
    notas = taka/10;
    taka -= notas*10;
    printf("%d nota(s) de R$ 10.00\n",notas);
    notas = taka/5;
    taka -= notas*5;
    printf("%d nota(s) de R$ 5.00\n",notas);
    notas = taka/2;
    taka -= notas*2;
    printf("%d nota(s) de R$ 2.00\n",notas);
    printf("MOEDAS:\n");
    notas = taka/1;
    taka -= notas*1;
    printf("%d moeda(s) de R$ 1.00\n",notas);
    notas = dec/50;
    dec -= notas*50;
    printf("%d moeda(s) de R$ 0.50\n",notas);
    notas = dec/25;
    dec -= notas*25;
    printf("%d moeda(s) de R$ 0.25\n",notas);
    notas = dec/10;
    dec -= notas*10;
    printf("%d moeda(s) de R$ 0.10\n",notas);
    notas = dec/5;
    dec -= notas*5;
    printf("%d moeda(s) de R$ 0.05\n",notas);
    notas = dec/1;
    dec -= notas*1;
    printf("%d moeda(s) de R$ 0.01\n",notas);

    return 0;
}

