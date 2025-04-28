#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
	int mes;
	setlocale(LC_ALL,"");
	printf("Esse programa identifica o mês pelo número;");
	printf("\nDigite o número do mês desejado:");
	scanf("%i", &mes);
	switch(mes){
		case 1:printf("\nEsse é o mês de Janeiro.");
		break;
		case 2:printf("\nEsse é o mês de Fevereiro.");
		break;
		case 3:printf("\nEsse é o mês de Março.");
		break;
		case 4:printf("\nEsse é o mês de Abril.");
		break;
		case 5:printf("\nEsse é o mês de Maio.");
		break;
		case 6:printf("\nEsse é o mês de Junho.");
		break;
		case 7:printf("\nEsse é o mês de Julho.");
		break;
		case 8:printf("\nEsse é o mês de Agosto.");
		break;
		case 9:printf("\nEsse é o mês de Setembro.");
		break;
		case 10:printf("\nEsse é o mês de Outubro.");
		break;
		case 11:printf("\nEsse é o mês de Novembro.");
		break;
		case 12:printf("\nEsse é o mês de Dezembro.");
		break;
		default:printf("\nO caractere ou o valor digitado não é um mês válido.");
		break;
	}
}
