#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main()
{
	int val1, val2, val3;
	setlocale(LC_ALL,"");
	printf("Esse programa identifica o maior n�mero!");
	printf("\nDigite o 1� n�mero:");
	scanf("%i",&val1);
	printf("\nDigite o 2� n�mero:");
	scanf("%i",&val2);
	printf("\nDigite o 3� n�mero:");
	scanf("%i",&val3);
	if(val1>val2 && val1>val3)
	{
		printf("\nO 1� valor � o maior!");
	}
	if(val1<val2 && val2>val3)
	{
		printf("\nO 2� valor � o maior!");
	}
	if(val3>val2 && val1<val3)
	{
		printf("\nO 3� valor � o maior!");
	}
	if(val1==val2 && val1==val3)
	{
		printf("\nOs n�meros s�o iguais!");
	}
	if(val1==val2 && val1>val3)
	{
		printf("\nO 1� e 2� valor s�o maiores que o 3� valor!");
	}
	if(val1<val2 && val2==val3)
	{
		printf("\nO 2� e 3� valor s�o maiores que o 1� valor!");
	}
	if(val1==val3 && val1>val2)
	{
		printf("\nO 1� e 3� valor s�o maiores que o 2� valor!");
	}
	getch();
}
