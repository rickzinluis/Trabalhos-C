#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void jogarmoeda(int m){
    for (int i = 0; i < m; i++)
    {
        if (rand() % 2)
        {
            printf("cara\n");
        }
        else{
            printf("coroa\n");
        }
    }
    
    
}

int main(){
    int qnt;
    printf("quantas vezes vai jogar a moeda?\n");
    scanf("%d", &qnt);

    srand(time(NULL));
    jogarmoeda(qnt);
}