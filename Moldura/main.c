#include <stdio.h>
#include <stdlib.h>
#include "ControlesDaTela.cpp"
void main(){
	int x, y;
	DesligaCursor();
	Cor(0xF0);
	system("CLS");
	//linhas
	for(x=1;x<59;x++){
		gotoxy(x,0);
		printf("\xCD");
	}
	for(x=60;x<119;x++){
		gotoxy(x,0);
		printf("\xCD");
	}
	for(x=1;x<59;x++){
		gotoxy(x,15);
		printf("\xCD");
	}
	for(x=1;x<59;x++){
		gotoxy(x,30);
		printf("\xCD");
	}
	for(x=60;x<119;x++){
		gotoxy(x,15);
		printf("\xCD");
	}
	for(x=60;x<119;x++){
		gotoxy(x,30);
		printf("\xCD");
	}
	//colunas
	for(y=1;y<15;y++){
		gotoxy(0,y);
		printf("\xBA");
	}
	for(y=1;y<15;y++){
		gotoxy(59,y);
		printf("\xBA");
	}
	for(y=1;y<15;y++){
		gotoxy(119,y);
		printf("\xBA");
	}	
	for(y=16;y<30;y++){
		gotoxy(0,y);
		printf("\xBA");
	}
	for(y=16;y<30;y++){
		gotoxy(59,y);
		printf("\xBA");
	}
	for(y=16;y<30;y++){
		gotoxy(119,y);
		printf("\xBA");
	}
	//caracteres especiais soltos
	gotoxy(0,0);
	printf("\xC9");
	gotoxy(59,0);
	printf("\xCB");
	gotoxy(119,0);
	printf("\xBB");
	gotoxy(0,15);
	printf("\xCC");
	gotoxy(0,30);
	printf("\xC8");
	gotoxy(59,15);
	printf("\xCE");
	gotoxy(119,15);
	printf("\xB9");
	gotoxy(119,30);
	printf("\xBC");
	gotoxy(59,30);
	printf("\xCA");
	//asteriscos verdes
	Cor(0xF2);
	gotoxy(56,13);
	printf("*");
	gotoxy(56,17);
	printf("*");
	gotoxy(62,13);
	printf("*");
	gotoxy(62,17);
	printf("*");
	//asteriscos vermelhos
	Cor(0xF4);
	gotoxy(52,17);
	printf("*");
	gotoxy(54,18);
	printf("*");
	gotoxy(56,19);
	printf("*");
	gotoxy(62,11);
	printf("*");
	gotoxy(64,12);
	printf("*");
	gotoxy(66,13);
	printf("*");
	//asteriscos azuis
	Cor(0xF1);
	gotoxy(56,11);
	printf("*");
	gotoxy(54,12);
	printf("*");
	gotoxy(52,13);
	printf("*");
	gotoxy(66,17);
	printf("*");
	gotoxy(64,18);
	printf("*");
	gotoxy(62,19);
	printf("*");
	getch();
}
