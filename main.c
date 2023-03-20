#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1, n2, n3, n4, media;
	
	printf("Informe a Nota 1 do aluno: ");
	scanf("%f", &n1);
	
	printf("Informe a Nota 2 do aluno: ");
	scanf("%f", &n2);
	
	printf("Informe a Nota 3 do aluno: ");
	scanf("%f", &n3);
	
	printf("Informe a Nota 4 do aluno: ");
	scanf("%f", &n4);
	
	media = (n1 + n2 + n3 + n4) / 4;
	
	if(media >= 7) {
		media = (n1 + n2 + n3 + n4) / 4;
		printf("O aluno foi aprovado com a nota: %.2f\n", media);
	}
	
	else{
		printf("O aluno foi reprovado com a nota %.2f", media);
	}
	return 0;
}