
// Average 3

#include <stdio.h>

int main() {
    float a, b, c, d, avg, reExam;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    avg = ((a*2)+(b*3)+(c*4)+(d*1))/(10);
    printf("Media: %.1f\n",avg);
    if (avg >= 7.0) {printf("Aluno aprovado.\n");}
    else if (avg < 5.0) {printf("Aluno reprovado.\n");}
    else if (avg >= 5.0 && avg <= 6.9) {
        printf("Aluno em exame.\n");
        scanf("%f", &reExam);
        printf("Nota do exame: %.1f\n",reExam);
        avg = (avg + reExam)/2;
        if (avg >= 5.0) {printf("Aluno aprovado.\n");}
        else if (avg <= 4.9) {printf("Aluno reprovado.\n");}
        printf("Media final: %.1f\n",avg);
        }
    return 0;
}