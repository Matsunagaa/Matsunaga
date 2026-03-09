#include <stdio.h>
#include <stdlib.h> // Necessário para usar malloc e free 
#include <string.h>

// Definição da estrutura conforme o PDF [cite: 270-276]
typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
} aluno_t;

int main() {
    // 1. Alocação dinâmica de um novo aluno 
    aluno_t *estudante = (aluno_t*) malloc(sizeof(aluno_t));

    // Verificação de segurança (boa prática em ADS) [cite: 266]
    if (estudante == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // 2. Carregamento dos dados
    printf("Digite o nome do aluno: ");
    fgets(estudante->nome, 100, stdin);
    estudante->nome[strcspn(estudante->nome, "\n")] = 0; // Remove o \n do final

    printf("Digite a nota do aluno (0-10): ");
    scanf("%f", &estudante->nota);

    printf("Digite a quantidade de faltas: ");
    scanf("%d", &estudante->faltas);

    // 3. Exibição dos dados com printf 
    printf("\n--- Dados do Estudante ---\n");
    printf("Nome: %s\n", estudante->nome);
    printf("Nota: %.2f\n", estudante->nota);
    printf("Faltas: %d\n", estudante->faltas);

    // 4. Avaliação de aprovação [cite: 281]
    // Utilizando a lógica da Questão 2: nota >= 7 e frequência (faltas) [cite: 142]
    // Considerando um curso padrão de 80 aulas (máximo de 20 faltas para ter 75% de freq.)
    if (estudante->nota >= 7.0 && estudante->faltas <= 20) {
        printf("Status: APROVADO\n");
    } else {
        printf("Status: REPROVADO\n");
    }

    // 5. Liberação da memória alocada [cite: 263]
    free(estudante);

    return 0;
}