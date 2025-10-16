#include <stdio.h>
#include <math.h>

    int main(){
        double cateto1, cateto2, hipotenusa, soma_quadrados;
        
        
        printf("\nInforme os valores dos catetos, comecando pelo cateto 1: ");
        
        scanf("%lf", &cateto1);
        
        printf("\nAgora o cateto 2: ");
        
        scanf("%lf", &cateto2);
        
        soma_quadrados = pow(cateto1, 2) + pow(cateto2, 2);

        
        hipotenusa = sqrt(soma_quadrados);
        
        printf("\nA hipotenusa eh %.2lf", hipotenusa);
        