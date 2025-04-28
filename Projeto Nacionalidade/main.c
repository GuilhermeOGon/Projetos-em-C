#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main()
{
	float altura;
	char nacao, sexo;
	setlocale(LC_ALL,"");
	printf("Esse programa indentifica sua nacionalidade.");
	printf("\nQual o país onde você nasceu:\nDigite (B) para Brasil.\nDigite (A) para Alemanha.\n");
	scanf("%c", &nacao);
	getchar();
	printf("\nQual o seu sexo de nascimento:\nDigite (M) para Masculino.\nDigite (F) para Feminino.\n");
	scanf("%c", &sexo);
	getchar();
	printf("Digite a sua altura:");
	scanf("%f", &altura);
	if (nacao == 'B' && sexo == 'M')
    {
        if (altura < 1.679)
        {
            printf("\nHomem brasileiro.");
            printf("\nBaixo.");
        }
        else if (altura >= 1.68 && altura <= 1.839)
        {
            printf("\nHomem brasileiro.");
            printf("\nMédio.");
        }
        else if (altura > 1.84)
        {
            printf("\nHomem brasileiro.");
            printf("\nAlto.");
        }
    }
    else if (nacao == 'A' && sexo == 'M')
    {
        if (altura < 1.749)
        {
            printf("\nHomem alemão.");
            printf("\nBaixo.");
        }
        else if (altura >= 1.75 && altura <= 1.849)
        {
            printf("\nHomem alemão.");
            printf("\nMédio.");
        }
        else if (altura > 1.85)
        {
            printf("\nHomem alemão.");
            printf("\nAlto.");
        }
    }
    else if (nacao == 'B' && sexo == 'F')
    {
        if (altura < 1.599)
        {
            printf("\nMulher brasileira.");
            printf("\nBaixa.");
        }
        else if (altura >= 1.60 && altura <= 1.729)
        {
            printf("\nMulher brasileira.");
            printf("\nMédia.");
        }
        else if (altura > 1.73)
        {
            printf("\nMulher brasileira.");
            printf("\nAlta.");
        }
    }
    else if (nacao == 'A' && sexo == 'F')
    {
        if (altura < 1.699)
        {
            printf("\nMulher alemã.");
            printf("\nBaixa.");
        }
        else if (altura >= 1.70 && altura <= 1.799)
        {
            printf("\nMulher alemã.");
            printf("\nMédia.");
        }
        else if (altura > 1.80)
        {
            printf("\nMulher alemã.");
            printf("\nAlta.");
        }
    }
    else
    {
        printf("\nOpção inválida!");
    }
	getch();
}
