#include <stdio.h>
void media(int s){
    float medi = s/3.0;
    printf("%.2f", medi);
}

int main(){
    int n[3];
    int i;
    int soma = 0;
    for (i = 0; i < 3; i++)
    {
        printf("digite o numero %d\n", i + 1);
        scanf("%d", &n[i]);
        soma += n[i];
    }
    
    media(soma);
    
    
    

}