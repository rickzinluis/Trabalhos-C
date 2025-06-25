#include <stdio.h>

int main(){
    float numeros[5];
    float soma = 0;
    float media = 0;
    float numeros2[5];
    float soma2 = 0, media2 = 0;


    /*inicio primeira media*/
    for (int i = 0; i < 5; i++)
    {
        printf("digite o numero: %d\n", i + 1);
        scanf("%f", &numeros[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        soma += numeros[i];
    }
    media = soma / 5;
    printf("a soma dos numero é: %.2f. e a media: %.2f\n",soma, media);
    float *p = &soma;
    float *p2 = &media;
    printf("a soma e media via ponteiros: %.2f, %.2f\n", *p, *p2);
    /*fim pimeira media*/

    /*inicio segunda media*/
    for (int i = 0; i < 5; i++)
    {
        printf("digite o numero: %d\n", i + 1);
        scanf("%f", &numeros2[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        soma2 += numeros2[i];
    }
    media2 = soma2 / 5;
    printf("a soma dos numero é: %.2f. e a media: %.2f\n",soma2, media2);
    float *p3 = &soma2;
    float *p4 = &media2;
    printf("a soma e media via ponteiros: %.2f, %.2f\n", *p3, *p4);
    /*fim segunda media*/


    /*media geral*/
    float mediaGeral = (*p2+*p4) / 2;
    printf("media geral: %.2f\n", mediaGeral);
    
    /*altera notas*/
    int alterarNota = 0;
    printf("Deseja modificar alguma nota?\n 1 - SIM\n 0 - NAO\n");
    scanf("%d", &alterarNota);
    if(alterarNota == 0)
    {
        printf("Finalizado\n");
    }  
    else if (alterarNota == 1)
    {
        printf("qual nota deseja alterar?\n");
        int alterarnota2 = 0;
        scanf("%d", &alterarnota2);
        if (alterarnota2<5)
        {
            for (int i = alterarnota2; i == alterarnota2; i++)
            {
                
                printf("Qual seria a nota correta?\n");
                scanf("%f", &numeros[i]);
            }
            for (int i = alterarnota2; i == alterarnota2; i++)
            {
                
                printf("Nota alterada: %.2f\n", numeros[i]);
                
            }
            
        }
        else if (alterarnota2 >= 5 && alterarnota2 < 10)
        {
            for (int i = alterarnota2; i == alterarnota2; i++)
            {
                
                printf("Qual seria a nota correta?\n");
                scanf("%f", &numeros2[i]);

            }
            for (int i = alterarnota2; i == alterarnota2; i++)
            {
                printf("Nota alterada: %.2f\n", numeros2[i]);
            }
        }
        else
        {
            printf("impossivel\n");
            return 0;
        }
        float soman = 0;
        float mediass = 0;
        for (int i = 0; i < 5; i++)
        {
            soman += numeros[i];
            soman += numeros2[i];
        }
            mediass = soman / 10;
        
        printf("soma nova %.2f\n", soman);
        printf("nova media: %.2f\n", mediass);
    }
    else{
        printf("Erro,retorne\n");
    }
    
    
}