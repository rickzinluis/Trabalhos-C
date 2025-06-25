#include <stdio.h>

void num(int *p){
    for (int i = 0; i < 10; i++)
    {
        if (*(p + i) % 2 == 0)
        {
            printf("o numero %d e par\n", *(p + i));
        }
        
    }
    
}

int main(){
    int numeros[10];
    printf("digite 10 numeros\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numeros[i]);
        
    }
    num(numeros);
}