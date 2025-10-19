#include <stdio.h>

int main(){
    //questionario sobre motos que o vinicius tem...
    int escolha;

    printf("\n1. YBR");
    printf("\n2. CG");
    printf("\n3. NMAX");
    printf("\n4. XTZ");
    printf("\nQual moto o Vinicius tem? ");

    scanf("%i", &escolha);
    if(escolha == 1){
    printf("\nVoce acertou");
}
    else if(escolha == 2 || escolha == 3 || escolha == 4){
        printf("\nVoce errou");
    }
    
    else{
        printf("\nAlternativa invalida");
    }




    
    


}