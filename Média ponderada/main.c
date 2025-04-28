#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
     float n1,n2,n3,n4,n5,n6,media;
     setlocale(LC_ALL,"");
     printf("Esse programa calcula a média ponderada de um aluno.");
     printf("\nDigite a 1° nota:");
     scanf("%f",&n1);
     printf("\nDigite a 2° nota:");
     scanf("%f",&n2);
     printf("\nDigite a 3° nota:");
     scanf("%f",&n3);
     printf("\nDigite a 4° nota:");
     scanf("%f",&n4);
     printf("\nDigite a 5° nota:");
     scanf("%f",&n5);
     printf("\nDigite a 6° nota:");
     scanf("%f",&n6);
     media = (n1*2+n2*3+n3*1+n4*1+n5*2+n6*4)/13;
     printf("A média do aluno é:%.2f.", media);
     getch();
}
