#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float valor_total, valor_prestacoes; 
	int num_prestacoes;
	
	printf("Insira o valor total em reais: ");
	scanf("%f", &valor_total);
	
	printf("Insira o total de prestacoes desejadas (No minimo 12x): ");
	scanf("%i", &num_prestacoes);

	if(num_prestacoes >= 24){
		valor_total = valor_total * 1.10;
	} 
	if(num_prestacoes >= 36){
		valor_total = valor_total * 1.15;
	}

	valor_prestacoes = valor_total / num_prestacoes; 
	
	printf("Cada prestacao tera o valor de: R$ %.2f", valor_prestacoes);
	
	return 0;
}