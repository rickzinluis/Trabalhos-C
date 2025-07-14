#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    // Definição da struct Aluno com typedef
    char nome[100];
    int matricula;
    float media;
} Aluno; // Agora 'Aluno' é o novo nome para 'struct Aluno'

int main() {
    Aluno a1; // Declara uma variável do tipo 'Aluno' (sem 'struct')
    Aluno *ptrA; // Declara um ponteiro para o tipo 'Aluno'

    strcpy(a1.nome, "Luis");
    a1.matricula = 2023005;
    a1.media = 8.9;

    printf("Nome do aluno (declaracao direta): %s\n", a1.nome);

    // Alocando dinamicamente com o novo nome do tipo 'Aluno'
    ptrA = (Aluno *) malloc(sizeof(Aluno));
    if (ptrA == NULL) {
        printf("Erro de alocacao!\n");
        return 1;
    }

    strcpy(ptrA->nome, "Ricardo Dantas");
    ptrA->matricula = 2023006;
    ptrA->media = 7.1;

    printf("Nome do aluno (via ponteiro): %s\n", ptrA->nome);

    free(ptrA);
    return 0;
}