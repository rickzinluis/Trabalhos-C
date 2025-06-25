#include <stdio.h>

int main(){
    int n;
    int n2;
    int inverte;
    printf("digite o numero 1\n");
    scanf("%d", &n);
    printf("digite o numero 2\n");
    scanf("%d", &n2);
    printf("antes da troca %d e %d\n", n, n2);

    int *p1 = &n;
    int *p2 = &n2;

    inverte = *p2;
    *p2 = *p1;
    *p1 = inverte;

    printf("depois da troca %d e %d\n", n, n2);
}





























