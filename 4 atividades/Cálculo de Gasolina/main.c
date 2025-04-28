#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main()
{
	float gasto, KML, preco, consumo, distancia, tanques;
	setlocale(LC_ALL,"");
	printf("Esse programa calcula o gasto com combustível.");
	printf("\nDigite a distância que será percorrida:");
	scanf("%f", &distancia);
	printf("\nDigite quantos KM seu carro percorre por litro:");
	scanf("%f", &KML);
	printf("\nDigite o preço do combustível:R$");
	scanf("%f", &preco);
	consumo=distancia/KML;
	gasto=consumo*preco;
	if (consumo < 55)
	{
		printf("\nVocê precisa de %.1f litros de combustível para seu carro", consumo);
		printf("\nVocê gastará R$%.2f", gasto);
	}
	else if (consumo > 55)
	{
		tanques=consumo/55;
		printf("\nVocê precisa de %.1f tanques de combustível para seu carro", tanques);
		printf("\n(%.1f litros)", consumo);
		printf("\nVocê gastará R$%.2f", gasto);
	}
	getch();
}
