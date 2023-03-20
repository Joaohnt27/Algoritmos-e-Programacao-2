#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float n1, n2;
	
	printf("Informe o primeiro numero: ");
	scanf("%f", &n1);
	
	printf("Informe o segundo numero: ");
	scanf("%f", &n2);
	
	if(n1 > n2){
		printf("O numero %.2f é maior.", n1);
	} else if(n2 > n1){
		printf("O numero %.2f é maior.", n2);
	}
	
	return 0;
}