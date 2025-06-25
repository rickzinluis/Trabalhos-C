/*Crie um programa que:
1. Solicite ao utilizador que introduza 10 números inteiros. Armazene estes
números num vetor.
2. Percorra o vetor para encontrar o maior e o menor valor.
3. Exiba o maior e o menor valor encontrados.*/

#include <stdio.h>

int main(){
    int numeros[10];
    printf("introduza 10 numeros\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numeros[i]);
    }
    int menor = numeros[10];
    int maior = numeros[0];
    for (int i = 0; i < 10; i++)
    {
        
        if (maior < numeros[i])
        {
            maior = numeros[i];
        }
        if (numeros [i] < menor)
        {
            menor = numeros[i];
        }
        
    }
    printf("maior numero %d\n e menor numero %d\n", maior, menor);
}


