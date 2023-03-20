#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Para rodar a equação no comando lógico do if é necessário lembrar:
// % = divisão
// && = significa "e"
// ! = diferente

int main(int argc, char *argv[]) {

	int ano;
	
	printf("Informe o ano: ");
	scanf("%i", &ano);
	
	if(ano % 400 == 0){
		printf("O ano %i e bissexto!", ano);
	} else if (ano % 4 == 0 && ano % 100 != 0){
		printf("O ano %i e bissexto!", ano);
	} else {
		printf ("O ano informado nao e bissexto");
	}
	
	return 0;
}
