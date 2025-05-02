
// Game Time with Minutes

#include <stdio.h>

int main()
{
    int h1, h2, m1, m2, minutes1, minutes2, differents;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    minutes1 = (h1 * 60) + m1;
    minutes2 = (h2 * 60) + m2;
    if (minutes2 <= minutes1)
    {
        minutes2 += 1440;
    }
    differents = minutes2 - minutes1;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", differents/60, differents%60);
    
    return 0;
}