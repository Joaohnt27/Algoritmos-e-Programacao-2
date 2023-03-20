#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int A, B, C;
	
	printf("Insira um valor para A: ");
	scanf("%i", &A);
	
	printf("Insira um valor para B: ");
	scanf("%i", &B);
	
	if(A == B){
		C = A + B;
	} else {
		C = A * B;
	}
	
	printf("O resultado de C = %i", C);
	
	return 0;
}