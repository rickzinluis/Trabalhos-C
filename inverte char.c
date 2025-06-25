#include <stdio.h>
#include <string.h>

void inverte(char p[]){
    int l;
    int k;
    k = strlen(p) - 1;
    char inve;
    for (l = 0; l < k; l++, k--) {
        inve = p[l];
        p[l] = p[k];
        p[k] = inve;
    }
    printf("Palavra invertida: %s\n", (p));
}


int main(){
    char palavra[10];
    
    
    printf("Digite uma palavra de no maximo 10 letras\n");
    scanf("%s", palavra);
    printf("%s\n", palavra);

    inverte(palavra);
}