#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int dia, mes, ano;
	
	printf("Informe o dia: ");
	scanf("%i", &dia);
	printf("Informe o mes: ");
	scanf("%i", &mes);
	printf("Informe o ano: ");
	scanf("%i", &ano);
	
	if(dia < 1 || dia > 31) {
		printf("Dia invalido!\n");
	}
	
	if(mes < 1 || mes > 12) {
		printf("Mes invalido!\n");
	}
	
	if(ano < 1) {
		printf("Ano invalido!\n");
	}
	
	// Meses com 31 dias: Janeiro, Março, Maio, Julho, Agosto, Outubro e Dezembro.
	// Meses com 30 dias: Abril, Junho, Setembro e Novembro.
	// Meses com 28 dias: Fevereiro.
	
	if((dia == 31 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) ||
	   (dia == 30 && mes == 2) ||
	   (dia == 29 && mes == 2 && (ano % 400 != 0 && (ano % 100 == 0 || ano % 4 !=0))) ||
	   (dia == 28 && mes == 2 && (ano % 400 == 0 || (ano % 100 != 0 && ano % 4 == 0)))) {
	   	printf("Nao foi possivel utilizar esse dia com o mes e ano informados.\n");
	   }
	   
	   dia++; // Pós-Incremento de 1 dia (+1 dia)
	   
	   if(dia > 31 || (dia == 31 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) ||
	     (dia == 30 && mes == 2) ||
	     (dia == 29 && mes == 2 && (ano % 400 != 0 && (ano % 100 == 0 || ano % 4 != 0))) ||
	     (dia == 28 && mes == 2 && (ano % 400 == 0 || (ano % 100 != 0 && ano % 4 == 0)))) {
	   	 dia = 1;
	     mes++;
	   }
	   
	   if (mes > 12) {
	   	mes = 1;
	   	ano++;
	   }
	   
	   printf("O dia seguinte sera: %i/%i/%i", dia, mes, ano);
	   
	return 0;
}