
// Event Time

#include <stdio.h>
#include <string.h>

int main()
{
    char day[5], temp[2];
    int d1, d2, h1, h2, m1, m2, s1, s2, sec1, sec2, differents, d=0, h=0, m=0, s=0;
    scanf("%s %d", day, &d1);
    scanf("%d %s %d %s %d", &h1, temp, &m1, temp, &s1);
    scanf("%s %d", day, &d2);
    scanf("%d %s %d %s %d", &h2, temp, &m2, temp, &s2);
    sec1 = s1 + (m1 * 60) + (h1 * 60 * 60) + (d1 * 24 * 60 * 60);
    sec2 = s2 + (m2 * 60) + (h2 * 60 * 60) + (d2 * 24 * 60 * 60);
    differents = sec2 - sec1;
    if (differents >= 86400)
    {
        d = differents/86400;
        differents %=86400;
    }
    if (differents >= 3600)
    {
        h = differents/3600;
        differents %=3600;
    }
    if (differents >= 60)
    {
        m = differents/60;
        differents %=60;
    }
    s = differents;
    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);
    return 0;
}