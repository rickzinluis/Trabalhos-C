#include <stdio.h>

int main() {
    char estabelecimento[100];
    float consumo, valor, total;
    
    printf("Qual o estabelecimento\n");
    scanf("%99s", estabelecimento);
    
    printf("Qual consumo de agua em m3\n");
    scanf("%f", &consumo);
    
    printf("Qual valor da tarifa por m3\n");
    scanf("%f", &valor);
    
    if (consumo < 0 || valor < 0) {
        printf("Erro: valores inválidos. Tente novamente.\n");
        return 1;
    }
    
    total = consumo * valor;
    
    if(consumo<50){
        total = total*0.88;
        printf("consumo consciente\n");
    }
    else if(consumo >= 50 && consumo <= 200){
        printf("consumo estavel\n");
    }
    else if(consumo>200){
        total = total * 3;
        printf("consumo excessivo,revisar seu gasto\n");
    }
    
    printf("O estabelecimento %s, consumiu %.1f, que o valor bruto esta sendo %.2f, passando a pagar %.1f", estabelecimento, consumo, valor, total);
    
    return 0;
}