#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1, n2, n3;
	
	printf("Informe o primeiro numero inteiro: ");
	scanf("%i", &n1);
	
	printf("Informe o segundo numero inteiro: ");
	scanf("%i", &n2);
	
	printf("Informe o terceiro numero inteiro: ");
	scanf("%i", &n3);
	
	if (n1 <= n2 && n1 <= n3){
		printf("%i ", n1);
		if (n2 <= n3){
			printf("%i %i\n", n2, n3);
		} else {
			printf("%i %i\n", n3, n2);
		} 
	} else if (n2 <= n1 && n2 <= n3){
		printf("%i ", n2);
		if (n1 <= n3){
			printf("%i %i\n", n1, n3);
		} else {
			printf("%i %i\n", n3, n1);
		}
	} else {
		printf("%i ", n3);
		if (n1 <= n2){
			printf("%i %i\n", n1, n2);
		} else{
			printf("%i %i\n", n2, n1);
		}
	}
	
	return 0;
}