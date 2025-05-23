#include <stdio.h>
#include <stdlib.h>
#include "ControlesDaTela.cpp"
#include <locale.h>
void main(){
	int x=0,valor;
	setlocale(LC_ALL,"");
	Cor(0xF0);
	system("cls");
	gotoxy(40,10);
	printf("----------------------------------------------------");
	gotoxy(40,11);
	printf("|Esse programa faz a tabuada desejada pelo usuário.|");
	gotoxy(40,12);
	printf("----------------------------------------------------");
	gotoxy(40,13);
	printf("|Digite o valor desejado:                           |");
	gotoxy(40,15);
	printf("----------------------------------------------------");
	gotoxy(60,14);
	scanf("%i",&valor);
	while(x<11){
		gotoxy(55,x+16);
		printf("|%02i x %02i = %i|",valor,x,x*valor);
		x++;
	}
	getch();
}
