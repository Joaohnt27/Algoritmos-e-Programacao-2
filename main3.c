#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1, n2, res;
	
	printf("Informe o Numero 1: ");
	scanf("%f", &n1);
	
	printf("Informe o Numero 2: ");
	scanf("%f", &n2);
	
	if(n1 > n2){
		printf("O numero %.2f e menor que %.2f", n2, n1);
	}
	else if (n2 > n1){
		printf("O numero %.2f e menor que %.2f", n1, n2);
	}
	
	return 0;
}