#include <stdio.h>

int main() {

    float n1, n2, n3, n4;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    float Media = (n1*2 + n2*3 + n3*4 + n4*1) / 10;
    printf("Media: %.1f\n", Media);

    if (Media >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (Media < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        float n5;
        scanf("%f", &n5);
        printf("Nota do exame: %.1f\n", n5);
        Media = (Media + n5) / 2;
        if (Media >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", Media);
    }

    return 0;
}
