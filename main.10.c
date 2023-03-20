#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {

	float peso, altura, imc; 
	
	printf("Informe o peso da pessoa (em kg): ");
	scanf("%f", &peso);
	
	printf("Informe a altura da pessoa (em metros): ");
	scanf("%f", &altura);
	
	imc = peso / (pow(altura,2)); 
	
	if (imc < 18.5){
		printf("Status: Abaixo do peso.\nValor IMC = %.2f", imc);
	} else if (imc >= 18.5 && imc < 25 ){
		printf("Status: Peso normal.\nValor IMC = %.2f", imc);
	} else if (imc >= 25 && imc <= 30){
		printf("Status: Acima do peso.\nValor IMC = %.2f", imc);
	} else if (imc > 30){
		printf("Status: Obeso.\nValor IMC = %.2f", imc);
	}
	
	return 0;
}
