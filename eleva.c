/*1. Implemente uma função chamada calcularPotencia que recebe dois
números inteiros: base e expoente.
2. Essa função deve calcular a base elevada ao expoente (por exemplo, 2^3
= 8).
3. No programa principal (main), solicite ao usuário a base e o expoente,
chame a função calcularPotencia e exiba o resultado. Não utilize a função
pow() da biblioteca math.h, implemente sua própria lógica.*/

#include <stdio.h>

void calcularPotencia(int base, int expoente){

    int calculo = 1;
    if (expoente <= 0)
    {
        printf("impossibilitado de realizar");
    }
    
    for (int i = 0; i < expoente; i++)
    {
        calculo *= base;
    }
    printf("resultado:%d\n", calculo);
    
}


int main()
{
    int b,e;
    printf("digite a base\n");
    scanf("%d", &b);
    printf("digite o expoente\n");
    scanf("%d", &e);
    calcularPotencia(b, e);
}
