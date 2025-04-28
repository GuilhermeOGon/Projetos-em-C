#include <stdio.h>
#include <stdlib.h>
#include "ControlesDaTela.cpp" //biblioteca externa
void main(){
	int x, y;
	DesligaCursor();
	Cor(0x46);
	system("CLS"); //sistema Clear Screen
	DesligaCursor();
	for(x=0;x<=10;x++){
		gotoxy(10,x);
		printf("02 x %02i = %02i",x,x*2);
		
		gotoxy(25,x);
		printf("03 x %02i = %02i",x,x*3);
		
		gotoxy(40,x);
		printf("04 x %02i = %02i",x,x*4);
		
		gotoxy(55,x);
		printf("05 x %02i = %02i",x,x*5);
		
		gotoxy(70,x);
		printf("06 x %02i = %02i",x,x*6);
		
		gotoxy(10,x+12);
		printf("07 x %02i = %02i",x,x*7);
		
		gotoxy(25,x+12);
		printf("08 x %02i = %02i",x,x*8);
		
		gotoxy(40,x+12);
		printf("09 x %02i = %02i",x,x*9);
		
		gotoxy(55,x+12);
		printf("10 x %02i = %02i",x,x*10);
	}
	getch();
}
