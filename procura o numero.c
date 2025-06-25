/*1. Declare um vetor de 7 números inteiros e preencha-o com valores (você
pode pedir ao usuário ou usar valores pré-definidos).
2. Solicite ao usuário um número para busca.
3. Verifique se o número buscado está presente no vetor.
4. Se o número for encontrado, exiba uma mensagem informando que ele
foi encontrado e em qual(is) posição(ões) (índice). Obs: Mostre
obrigatoriamente
5. Se o número não for encontrado, exiba uma mensagem informando que
ele não está no vetor.*/
#include <stdio.h>
int main(){
    int numeros[7];
    int numero;
    int encontrado = 0;
    printf("digite 7 numeros\n");


    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &numeros[i]);
    }
    
    printf("numero buscado\n");
    scanf("%d", &numero);

    for (int i = 0; i < 7; i++)
    {
        if (numero == numeros[i])
        {
            printf("numero encontrado na posição:%d\n", i + 1);
            encontrado = 1;
        }
        
        
    }
    if (encontrado == 0) {
    printf("Número não encontrado no vetor.\n");
    }
    
    
}