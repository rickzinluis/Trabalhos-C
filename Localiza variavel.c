#include <stdio.h>
void valorendereco(int *p){
    printf("o valor digitado foi:%d\n", *p);
    printf("o endereco da variavel é %p\n", p);
}
int main(){
    int x;
    printf("digite um numero inteiro\n");
    scanf("%d", &x);
    valorendereco(&x);
    
}