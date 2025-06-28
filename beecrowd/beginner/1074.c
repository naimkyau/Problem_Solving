
// Even or Odd

#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);
    for (int time = 0; time < t; time++) {
        scanf("%d", &n);
        if (n == 0) {printf("NULL\n");continue;}
        if (n %2 == 0) {printf("EVEN ");}
        else {printf("ODD ");}
        if (n > 0) {printf("POSITIVE\n");}
        else {printf("NEGATIVE\n");}
    }
    return 0;
}