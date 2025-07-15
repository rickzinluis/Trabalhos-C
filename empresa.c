#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    int matricula;
    float salario;
}funcionarios;

int main(){
    int nf;
    printf("---- Numero de funcionarios ----\n");
    scanf("%d", &nf);
    funcionarios *empresa;
    empresa = (funcionarios *) malloc(nf * sizeof(funcionarios));

    if (empresa == NULL)
    {
        printf("alocação nao sucedida\n");
    }

    for (int i = 0; i < nf; i++)
    {
        printf("--- Digite o nome do funcionario : %d ---\n", i + 1);
        getchar();
        fgets(empresa[i].nome, 50, stdin);
        printf("--- Digite a matricula do funcionario : %d ---\n", i + 1);
        scanf("%d", &empresa[i].matricula);
        printf("--- Digite o salario do funcionario : %d ---\n", i + 1);
        scanf("%f", &empresa[i].salario);
    }
    for (int i = 0; i < nf; i++)
    {
        printf("--- Funcionario : %d ---\n", i + 1);
        printf("Nome: %s\n matricula: %d\n salario: %.2f\n", empresa[i].nome, empresa[i].matricula, empresa[i].salario);
    }
    free(empresa);
    
}
