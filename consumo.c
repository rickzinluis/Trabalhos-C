#include <stdio.h>

int main(){
    int unidades;
    int i;
    char estabelecimento[100][100];
    int consumo[100];
    int agua[100];
    int soma = 0, maior = 0, validos = 0;
    float media = 0.0;

    printf("Quantas unidades a serem avaliadas:\n");
    scanf("%d", &unidades);
    getchar();

    for (i = 0; i < unidades; i++) {
        printf("Digite o nome do estabelecimento %d: ", i + 1);
        scanf("%99s", estabelecimento[i]);

        printf("Qual o consumo do estabelecimento %d: ", i + 1);
        scanf("%d", &agua[i]);

        if (agua[i] <= 0) {
            printf("Valor desconsiderado.\n");
            consumo[i] = 0;
            continue;
        } else {
            consumo[i] = agua[i];
            soma += agua[i];
            validos++;
        }

        if (agua[i] > 100) {
            maior++;
        }
    }

    if (validos > 0) {
        media = (float)soma / validos;
    }

    for (i = 0; i < unidades; i++) {
        printf("O estabelecimento %s consumiu %d m3\n", estabelecimento[i], agua[i]);
    }

    printf("O consumo total de todos os estabelecimentos: %d\n", soma);
    printf("Número de estabelecimentos que consumiram mais de 100 m3: %d\n", maior);
    printf("A média de consumo dos estabelecimentos válidos: %.2f\n", media);

    return 0;
}
