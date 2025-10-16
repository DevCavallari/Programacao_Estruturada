#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	/// declarando as variaveis 
	double 
	valor_mensal, 
	taxa, 
	meses, 
	valor_acumulado, taxa_1, meses_elevado,formula_final;
	

	//entrada de dados
	printf("\nDigite o valor que sera depositado mensalmente: ");
	scanf("%lf", &valor_mensal);
	
	printf("\nDigite a taxa que sera aplicada mensalmente: ");
	scanf("%lf", &taxa);
	
	printf("\nDigite a quantidade de meses do investimento: ");
	scanf("%lf", &meses);
	
		/// Aplicação em poupança fórmula: valor_mensal * (1 + taxa)elevado à meses - 1
		taxa_1 = (1 + taxa);
		meses_elevado = pow(taxa_1, meses);
		formula_final = (valor_mensal * meses_elevado - 1);
		
		/// saida de resultados
		printf("\n O resultado eh R$%.2lf", formula_final);
		
	return 0;
	
}
