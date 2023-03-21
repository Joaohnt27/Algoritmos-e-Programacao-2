#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1, n2, res;
	char opcao;
	
	printf("Informe o primeiro numero: ");
	scanf("%i", &n1);
	printf("Informe o segundo numero: ");
	scanf("%i", &n2);
	
	printf("Escolha uma das opcoes:\n");
	printf("A - Retornar a soma de dois numeros.\n");
	printf("S - Retornar a subtracao de dois numeros.\n");
	printf("M - Retornar a multiplicacao de dois numeros.\n");
	printf("Q - Retornar o quociente inteiro de uma divisao.\n");
	printf("Opcao: ");
	scanf(" %c", &opcao);
	
	switch (opcao){
		case 'A':
			res = n1 + n2;
			printf("A soma dos dois numeros e: %i", res);
			break;
		case 'S': 
			res = n1 - n2; 
			printf("A subtracao dos dois numeros e: %i", res);
			break;
		case 'M': 
			res = n1 * n2;
			printf("A multiplicacao dos dois numeros e: %i", res);
			break;
		case 'Q':
			if (n2 != 0){
			 	res = n1 / n2;
			 	printf("O quociente da divisao dos dois numeros e: %i\n", res);			
			} else {
				printf("Erro: Opcao invalida.\n");
			}
			break;
	
	}
	
	return 0;
}