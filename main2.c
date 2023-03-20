#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1, n2, media;
	
	printf("Informe a Nota 1: ");
	scanf("%f", &n1);
	
	printf("Informe a Nota 2: ");
	scanf("%f", &n2);
	
	media = (n1 +  n2) / 2;
	
	if(media < 3) {
		printf("Reprovado, pois sua nota e: %.2f", media);
	} else if(media < 7) {
		printf("Exame, pois sua nota e: %.2f", media);
	} else{
		printf("Aprovado com a media: %.2f", media);
}

	return 0;
}