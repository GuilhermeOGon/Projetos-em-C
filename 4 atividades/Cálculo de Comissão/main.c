#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main()
{
	float produto, comissao, valTotal, pagamento;
	setlocale(LC_ALL,"");
	printf("Esse programa calcula a comissão da equipe de vendedores.");
	printf("\nDigite o valor do produto:");
	scanf("%f", &produto);
	printf("\nQual a forma do pagamento:\n'1' para 'A vista'\n'2' para 'parcelada'\n");
	scanf("%f", &pagamento);
	if (pagamento ==1)
	{
		valTotal= produto*0.90;
		comissao=valTotal*0.10;
		printf("\nPagamento à vista.");
		printf("\nTotal com desconto aplicado: %.2f", valTotal);
		printf("\nComissão do vendedor: %.2f", comissao);
	}
	else if (pagamento ==2)
	{
		valTotal=produto/5;
		comissao=produto*0.05;
		printf("\nPagamento parcelado.");
		printf("\nValor total de cada parcela: %.2f", valTotal);
		printf("\nComissão do vendedor: %.2f", comissao);
	}
	else
	{
		printf("\nOpção inválida!");
	}
	getch();
}
