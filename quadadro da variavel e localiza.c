#include <stdio.h>
void dobrarx(int *p){
    int z;
    if (*p > 0)
    {
        z = (*p) * (*p);
        printf("o quadrado do numero é %d\n", z);
        printf("o endereço do numero é %p\n", p);
    }
    else{
        z = (*p) * 0;
        printf("o valor é %d\n", z);
        printf("o endereço do numero é %p\n", p);
    }
    
}

int main(){
    int x;
    printf("digite um numero\n");
    scanf("%d", &x);
    dobrarx(&x);
}