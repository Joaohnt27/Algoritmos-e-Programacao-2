#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	float  altura, peso; 
	char sexo;

	printf("Informe a altura da pessoa: ");
	scanf("%f", &altura);
	
	printf("Informe o sexo da pessoa (M para masculino e F para feminino): ");
	scanf(" %c", &sexo);
	
	
	if (sexo == 'M' || sexo == 'm'){
		peso = (72.7 * altura) - 58;
	} else if (sexo == 'F' || sexo == 'f'){
		peso = (62.1 * altura) - 44.7;
	} else {
		printf("Sexo invalido!");
		
		return 0;
	}
	
	printf("O peso ideal para uma pesso do sexo %c com as informacoes fornecidas e: %.2f", sexo, peso);
	
	return 0;
}
