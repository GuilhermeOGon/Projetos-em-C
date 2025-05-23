#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "ControlesDaTela.cpp"
void main(){
	int x=0,y=15;
	Cor(0xF0);
	system("cls");
	DesligaCursor();
	//sobe
	do{
		gotoxy(x,y);
		printf("*");
		Sleep(50);
		gotoxy(x,y);
		printf(" ");
		x++;
		y--;
	}while(x<15);
	//desce
	do{
		gotoxy(x,y);
		printf("*");
		Sleep(50);
		gotoxy(x,y);
		printf(" ");
		x++;
		y=y+2;
	}while(x<30);
	//sobe
	do{
		gotoxy(x,y);
		printf("*");
		Sleep(50);
		gotoxy(x,y);
		printf(" ");
		x++;
		y=y-2;
	}while(x<45);
	//desce
	do{
		gotoxy(x,y);
		printf("*");
		Sleep(50);
		gotoxy(x,y);
		printf(" ");
		x++;
		y=y+2;
	}while(x<60);
	//sobe
	do{
		gotoxy(x,y);
		printf("*");
		Sleep(50);
		gotoxy(x,y);
		printf(" ");
		x++;
		y=y-2;
	}while(x<75);
	//desce
	do{
		gotoxy(x,y);
		printf("*");
		Sleep(50);
		gotoxy(x,y);
		printf(" ");
		x++;
		y=y+2;
	}while(x<92);
	//sobe
	do{
		gotoxy(x,y);
		printf("*");
		Sleep(50);
		gotoxy(x,y);
		printf(" ");
		x++;
		y=y-2;
	}while(x<107);
	//desce
	do{
		gotoxy(x,y);
		printf("*");
		Sleep(50);
		gotoxy(x,y);
		printf(" ");
		x++;
		y=y+2;
	}while(x<120);
	getch();
}
