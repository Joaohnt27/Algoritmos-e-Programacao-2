#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {

	float valor, preco_final; 
	char estado[3];
	
	printf("Informe o valor do produto: ");
	scanf("%f", &valor);
	
	printf("Informe o estado para a venda do produto: ");
	scanf("%s", &estado);
	
	// a formatação utilizada no scanf deve ser "%s", que indica que o computador está lendo uma string. Ao utilizar "%s", a função scanf lê uma sequência de caracteres.
	
	if(estado[0] == 'M' && estado[1] == 'G' || estado[0] == 'm' && estado[1] == 'g'){
		preco_final = valor * 1.07;
	} else if (estado[0] == 'S' && estado[1] == 'P' || estado[0] == 's' && estado[1] == 'p'){
		preco_final = valor * 1.12;
	} else if (estado [0] == 'R' && estado[1] == 'J'|| estado[0] == 'r' && estado[1] == 'j'){
		preco_final = valor * 1.15;
	} else if (estado [0] == 'M' && estado[1] == 'S' || estado[0] == 'm' && estado [1] == 's'){
		preco_final = valor * 1.08;
	} else {
		printf("A empresa nao realiza vendas nesse estado.");
		
		return 0;
	}
	
	printf("Preco final = R$ %.2f", preco_final);
	
	return 0;
}

// Para que o computador leia uma string de duas letras, a variável "estado" foi declarada como um array de caracteres com tamanho 3, para armazenar as duas letras da sigla do estado mais o caractere nulo. 
// Após a leitura da string com o scanf, os caracteres correspondentes à sigla do estado podem ser acessados individualmente utilizando char estado[3]. 
// estado[0] corresponde à primeira letra da sigla e estado[1] corresponde à segunda letra.