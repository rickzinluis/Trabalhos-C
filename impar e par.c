#include <stdio.h>

void n(int p){
    if (p%2==0)
    {
        printf("par\n");
    }
    else{
        printf("impar\n");
    }
    
}

int main(){
    int num;
    printf("digite um numero\n");
    scanf("%d", &num);
    n(num);
}