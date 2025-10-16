#include <stdio.h>

    int main(){
    float nota1, nota2, nota3, nota4, soma, media;
    
        printf("\nDigite a media do 1 bimestre:");
        scanf("%f", &nota1);
        
         printf("\nDigite a media do 2 bimestre:");
        scanf("%f", &nota2);
        
         printf("\nDigite a media do 3 bimestre:");
        scanf("%f", &nota3);
        
         printf("\nDigite a media do 4 bimestre:");
        scanf("%f", &nota4);
        
        soma = nota1+nota2+nota3+nota4;
        media = soma / 4.0;
           
        printf("\nA soma das suas notas eh %.2f", soma);
        
        printf("\nSua media anual eh %.2f", media);
        
        return 0;
        
    };