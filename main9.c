#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float preco_etiqueta, preco_final;
	int opcao_pagamento;
	
	printf("Digite o preco da etiqueta que esta no produto: ");
	scanf("%f", &preco_etiqueta);
	
	printf("Escolha a forma de pagamento:\n");
	printf("(1) A vista em dinheiro ou cheque, recebe 10%% de desconto.\n");
	printf("(2) A vista no cartao de credito, recebe 15%% de desconto.\n");
	printf("(3) Em duas vezes, preco normal de etiqueta sem juros.\n");
	printf("(4) Em tres vezes, preco normal de etiqueta mais 10%% de juros.\n");
	scanf("%i", &opcao_pagamento);
	
	switch(opcao_pagamento){
		case 1: 
			preco_final = preco_etiqueta * 0.9;
			break;
		case 2:
			preco_final = preco_etiqueta * 0.85;
			break;
		case 3:
			preco_final = preco_etiqueta;
			break;
		case 4:
			preco_final = preco_etiqueta * 1.1;
			break;
			
			return 0;
	}
	
	printf("O preco final do produto e: R$ %.2f\n", preco_final);
	
	return 0;
}