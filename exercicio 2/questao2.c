#include <stdio.h>
int main() {
    float nota, freq;
    printf("Nota e Frequencia: ");
    scanf("%f %f", &nota, &freq);

    if (nota >= 7.0 && freq >= 75.0) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
    return 0;
}