/* 6a) Saída do programa: 
    "while: 0" até "while: 9" 
    "do: 10" (O 'do' executa uma vez antes de testar a condição, e o i já era 10).

6b) Diferença: O 'while' é uma estrutura de pré-teste (verifica a condição antes de executar o bloco). 
    O 'do..while' é de pós-teste (executa o bloco ao menos uma vez antes de verificar a condição).

6c) Implementação do bloco (Equivalente em FOR):
    for(int i = 0; i < 10; i++) {
        printf("for: %d\n", i);
    }

6d) While vs For: O 'for' é usado quando se conhece previamente o número de repetições (iterações controladas). 
    O 'while' é preferível quando o critério de parada é uma condição que pode ocorrer a qualquer momento (ex: ler até o fim de um arquivo).
*/