#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "ControlesDaTela.cpp"
void main(){
	int x=0,y=29;
	do{
		gotoxy(x,y);
		printf("*");
		Sleep(500);
		gotoxy(x,y);
		printf(" ");
		x=x+4;
		y--;
	}while(x<60);
	getch();
}
