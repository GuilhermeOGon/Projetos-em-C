#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main()
{
	float gasto, KML, preco, consumo, distancia, tanques;
	setlocale(LC_ALL,"");
	printf("Esse programa calcula o gasto com combust�vel.");
	printf("\nDigite a dist�ncia que ser� percorrida:");
	scanf("%f", &distancia);
	printf("\nDigite quantos KM seu carro percorre por litro:");
	scanf("%f", &KML);
	printf("\nDigite o pre�o do combust�vel:R$");
	scanf("%f", &preco);
	consumo=distancia/KML;
	gasto=consumo*preco;
	if (consumo < 55)
	{
		printf("\nVoc� precisa de %.1f litros de combust�vel para seu carro", consumo);
		printf("\nVoc� gastar� R$%.2f", gasto);
	}
	else if (consumo > 55)
	{
		tanques=consumo/55;
		printf("\nVoc� precisa de %.1f tanques de combust�vel para seu carro", tanques);
		printf("\n(%.1f litros)", consumo);
		printf("\nVoc� gastar� R$%.2f", gasto);
	}
	getch();
}
