#include <stdio.h>
#include <stdlib.h>

typedef struct livro
{
    char titulo[100];
    char autor[50];
    int anoPublicacao;
}livro;
int main(){
    livro biblioteca[3];
    
    biblioteca[0] = (livro){.titulo = "O senhor dos aneis", .autor = "J.R.R Tolkien" , .anoPublicacao = 1954};
   
    biblioteca[1] = (livro){.titulo = "1984", .anoPublicacao = 1949, .autor = "George Well"};

    biblioteca[2] = (livro){.titulo = "dom casmurro", .anoPublicacao = 1899, .autor = "Machado de assis"};
    printf("---- Catalogo ----\n");
    for (int i = 0; i < 3; i++)
    {
        printf("livro : %d\n", i + 1);
        printf(" Titulo : %s\n", biblioteca[i].titulo);
        printf(" Ano : %d\n", biblioteca[i].anoPublicacao);
        printf(" Autor : %s\n", biblioteca[i].autor);
        printf("---------------------\n");
    }
    return 0;
    
}
