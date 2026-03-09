#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
    struct Aluno *prox; // Próximo nó [cite: 313]
} aluno_t;

int main() {
    // Criando o nó raiz (head) [cite: 293]
    aluno_t *head = (aluno_t*) malloc(sizeof(aluno_t));
    
    // Dados do exemplo [cite: 320]
    strcpy(head->nome, "Lucas Matsunaga");
    head->nota = 8.5;
    head->faltas = 5;
    head->prox = NULL; // Último aponta para NULL [cite: 293]

    // Exibição e avaliação [cite: 321]
    printf("Estudante: %s | Nota: %.1f\n", head->nome, head->nota);
    if (head->nota >= 7.0 && head->faltas <= 25) { // Lógica baseada na Q2 e Q9
        printf("Resultado: APROVADO\n");
    } else {
        printf("Resultado: REPROVADO\n");
    }

    free(head);
    return 0;
}