
/*1. Declare um vetor de 8 números inteiros. Você pode inicializá-lo com
valores fixos ou pedir ao usuário para digitá-los.
2. Percorra o vetor e conte quantos números são pares e quantos são
ímpares.
3. Exiba o total de números pares e o total de números ímpares encontrados
no vetor.
4. Conte quantos números pares são necessários, em ordem crescente
iniciando do 0, fazendo a soma dos mesmos, para chegar em 28.122 ( obs:
até chegar o mais próximo do valor entregue anteriormente, no caso
decidir se o mais próximo vai ser o resultado da soma anterior ou posterior
ao valor entregue).
5. Conte quantos números ímpares são necessários, em ordem crescente
iniciando do 1, fazendo a soma dos mesmos, para chegar em 100.315. (
obs: até chegar o mais próximo do valor entregue anteriormente, no caso
decidir se o mais próximo vai ser o resultado da soma anterior ou posterior
ao valor entregue).*/


#include <stdio.h>

int main(){
    int numeros[8];
    int par[8],impar[8];
    int somap = 0;
    int somai = 0;
    int soma = 0;
    int somaim = 0;
    int quantidade = 0;
    int quantidadei = 0;
    int alvo = 28122;
    int alvo2= 100315;
    printf("digite os numeros\n");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &numeros[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            par[somap] = numeros[i];
            somap++;
        }
        else{
            impar[somai] = numeros[i];
            somai++;
        }
        
    }

    printf("quantidade de numeros impares:%d\n quantidade de numeros pares:%d\n", somai, somap);

    if (somai == 0) {
        printf("Sem numeros impares\n");
    } else {
        printf("Impares:\n");
        for (int i = 0; i < somai; i++) {
            printf("%d\n", impar[i]);
        }
    }
    if (somap == 0) {
        printf("Sem numeros pares\n");
    } else {
        printf("pares:\n");
        for (int i = 0; i < somap; i++) {
            printf("%d\n", par[i]);
        }
    }
    
    for (int i = 0; i < alvo; soma += 2)
    {
        quantidade++;
        alvo -= soma;
        
    }
    printf("precisam de %d pares\n", quantidade);
    
    for (int i = 1; i < alvo2; somaim += 2)
    {
        quantidadei++;
        alvo2 -= somaim;
    }
    printf("precisam de %d impares", quantidadei);
    
}