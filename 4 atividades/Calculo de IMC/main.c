#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main()
{
	float altura, peso, imc;
	setlocale(LC_ALL,"");
	printf("Esse programa indica e calcula o IMC (Índice de Massa Corporal)");
	printf("\nDigite sua altura:");
	scanf("%f", &altura);
	printf("\nDigite seu peso:");
	scanf("%f", &peso);
	imc= peso/ (altura*altura);
	if(imc < 18.5)
	{
		printf("\nSeu IMC é %.1f.",imc);
		printf("\nVocê esta abaixo do peso ideal.");
	}
	if(imc > 18.5 && imc < 24.9)
	{
		printf("\nSeu IMC é %.1f.",imc);
		printf("\nParabéns — você está em seu peso normal.");
	}
	if(imc > 25 && imc < 29.9)
	{
		printf("\nSeu IMC é %.1f.",imc);
		printf("\nVocê está acima de seu peso (sobrepeso).");
	}
	if(imc > 30 && imc < 34.9)
	{
		printf("\nSeu IMC é %.1f.",imc);
		printf("\nObesidade grau I.");
	}
	if(imc > 35 && imc < 39.9)
	{
		printf("\nSeu IMC é %.1f.",imc);
		printf("\nObesidade grau II.");
	}
	if(imc > 40)
	{
		printf("\nSeu IMC é %.1f.",imc);
		printf("\nObesidade grau III.");
	}
}
