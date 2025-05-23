#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "ControlesDaTela.cpp"
void main(){
	int x=0,y=29;
	Cor(0x50);
	system("cls");
	DesligaCursor();
	do{
		gotoxy(x,y);
		printf("*");
		Sleep(50);
		gotoxy(x,y);
		printf(" ");
		x=x+2;
		y--;
	}while(x<58);
	do{
		gotoxy(x,y);
		printf("*");
		Sleep(50);
		gotoxy(x,y);
		printf(" ");
		x=x+2;
		y++;
	}while(x<120);
	getch();
}
