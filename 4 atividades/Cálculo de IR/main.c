#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main()
{
	float valBMensal, valBAnual, aliq, DesMensal, DesAnual, valLMensal, valLAnual, PDIR;
	setlocale(LC_ALL,"");
	printf("Esse programa informa o desconto de Imposto de Renda.");
	printf("\nInsira aqui o valor bruto recebido mensalmente:");
	scanf("%f",&valBMensal);
	valBAnual=valBMensal*12;
	if(valBAnual < 26963.20)
	{
		aliq = 0;
		printf("\nAlíquota aplicável: Com base no valor bruto anual de R$ %.2f, os descontos do IRRF não serão aplicada.", valBAnual);
		printf("\nValor Bruto Anual: R$ %.2f.", valBAnual);
		printf("\nDesconto Mensal: R$ %.2f.", DesMensal);
		printf("\nDesconto Anual: R$ %.2f.", DesAnual);
	}
	if(valBAnual > 26963.20 && valBAnual < 33919.80)
	{
		aliq = 0.075;
		DesAnual=(valBAnual-2022.24)*aliq;
		DesMensal=DesAnual/12;
		valLMensal=valBMensal-DesMensal;
		valLAnual=valBAnual-DesAnual;
		printf("\nAlíquota aplicável: Com base no valor bruto anual de R$ %.2f, o desconto do IRRF será de 7,5 por cento.", valBAnual);
		printf("\nValor Bruto Anual: R$ %.2f.", valBAnual);
		printf("\nDesconto Mensal: R$ %.2f.", DesMensal);
		printf("\nDesconto Anual: R$ %.2f.", DesAnual);
		printf("\nValor Líquido Mensal: R$ %.2f.", valLMensal);
		printf("\nValor Líquido Anual: R$ %.2f.", valLAnual);
	}
	if(valBAnual > 33919.80 && valBAnual < 45012.60)
	{
		aliq = 0.15;
		DesAnual=(valBAnual-4566.23)*aliq;
		DesMensal=DesAnual/12;
		valLMensal=valBMensal-DesMensal;
		valLAnual=valBAnual-DesAnual;
		printf("\nAlíquota aplicável: Com base no valor bruto anual de R$ %.2f, o desconto do IRRF será de 15 por cento.", valBAnual);
		printf("\nValor Bruto Anual: R$ %.2f.", valBAnual);
		printf("\nDesconto Mensal: R$ %.2f.", DesMensal);
		printf("\nDesconto Anual: R$ %.2f.", DesAnual);
		printf("\nValor Líquido Mensal: R$ %.2f.", valLMensal);
		printf("\nValor Líquido Anual: R$ %.2f.", valLAnual);
	}
	if(valBAnual > 45012.60 && valBAnual < 55976.16)
	{
		aliq = 0.225;
		DesAnual=(valBAnual-7942.17)*aliq;
		DesMensal=DesAnual/12;
		valLMensal=valBMensal-DesMensal;
		valLAnual=valBAnual-DesAnual;
		printf("\nAlíquota aplicável: Com base no valor bruto anual de R$ %.2f, o desconto do IRRF será de 22,5 por cento.", valBAnual);
		printf("\nValor Bruto Anual: R$ %.2f.", valBAnual);
		printf("\nDesconto Mensal: R$ %.2f.", DesMensal);
		printf("\nDesconto Anual: R$ %.2f.", DesAnual);
		printf("\nValor Líquido Mensal: R$ %.2f.", valLMensal);
		printf("\nValor Líquido Anual: R$ %.2f.", valLAnual);
	}
	if(valBAnual > 55976.16)
	{
		aliq = 0.275;
		DesAnual=(valBAnual-10740.98)*aliq;
		DesMensal=DesAnual/12;
		valLMensal=valBMensal-DesMensal;
		valLAnual=valBAnual-DesAnual;
		printf("\nAlíquota aplicável: Com base no valor bruto anual de R$ %.2f, o desconto do IRRF será de 27,5 por cento.", valBAnual);
		printf("\nValor Bruto Anual: R$ %.2f.", valBAnual);
		printf("\nDesconto Mensal: R$ %.2f.", DesMensal);
		printf("\nDesconto Anual: R$ %.2f.", DesAnual);
		printf("\nValor Líquido Mensal: R$ %.2f.", valLMensal);
		printf("\nValor Líquido Anual: R$ %.2f.", valLAnual);
	}
	getch();
}
