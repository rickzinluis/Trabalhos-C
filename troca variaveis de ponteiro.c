#include <stdio.h>
void dobrarx(int *p, int *l){
    int z, s;
    z = (*p);
    s = (*l);

    if(z = *p)
    {
        z = *l;
        printf("Numero 1 agora é: %d\n", z);
    }
    if (s = *l)
    {
        s = *p;
        printf("numero 2 agora é: %d\n", s);
    }
    
    
    }
    

int main(){
    int x, y;
    printf("digite um numero 1\n");
    scanf("%d", &x);
    printf("digite um numero 2\n");
    scanf("%d", &y);
    dobrarx(&x, &y);
}