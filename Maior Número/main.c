#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main()
{
	int val1, val2, val3;
	setlocale(LC_ALL,"");
	printf("Esse programa identifica o maior número!");
	printf("\nDigite o 1° número:");
	scanf("%i",&val1);
	printf("\nDigite o 2° número:");
	scanf("%i",&val2);
	printf("\nDigite o 3° número:");
	scanf("%i",&val3);
	if(val1>val2 && val1>val3)
	{
		printf("\nO 1° valor é o maior!");
	}
	if(val1<val2 && val2>val3)
	{
		printf("\nO 2° valor é o maior!");
	}
	if(val3>val2 && val1<val3)
	{
		printf("\nO 3° valor é o maior!");
	}
	if(val1==val2 && val1==val3)
	{
		printf("\nOs números são iguais!");
	}
	if(val1==val2 && val1>val3)
	{
		printf("\nO 1° e 2° valor são maiores que o 3° valor!");
	}
	if(val1<val2 && val2==val3)
	{
		printf("\nO 2° e 3° valor são maiores que o 1° valor!");
	}
	if(val1==val3 && val1>val2)
	{
		printf("\nO 1° e 3° valor são maiores que o 2° valor!");
	}
	getch();
}
