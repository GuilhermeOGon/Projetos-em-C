#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
	int mes;
	setlocale(LC_ALL,"");
	printf("Esse programa identifica o m�s pelo n�mero;");
	printf("\nDigite o n�mero do m�s desejado:");
	scanf("%i", &mes);
	switch(mes){
		case 1:printf("\nEsse � o m�s de Janeiro.");
		break;
		case 2:printf("\nEsse � o m�s de Fevereiro.");
		break;
		case 3:printf("\nEsse � o m�s de Mar�o.");
		break;
		case 4:printf("\nEsse � o m�s de Abril.");
		break;
		case 5:printf("\nEsse � o m�s de Maio.");
		break;
		case 6:printf("\nEsse � o m�s de Junho.");
		break;
		case 7:printf("\nEsse � o m�s de Julho.");
		break;
		case 8:printf("\nEsse � o m�s de Agosto.");
		break;
		case 9:printf("\nEsse � o m�s de Setembro.");
		break;
		case 10:printf("\nEsse � o m�s de Outubro.");
		break;
		case 11:printf("\nEsse � o m�s de Novembro.");
		break;
		case 12:printf("\nEsse � o m�s de Dezembro.");
		break;
		default:printf("\nO caractere ou o valor digitado n�o � um m�s v�lido.");
		break;
	}
}
