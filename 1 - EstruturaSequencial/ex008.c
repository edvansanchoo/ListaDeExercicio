// Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s. 
// Calcule e mostre o total do seu sal�rio no referido m�s.

#include<stdio.h>

main()
{
	int gh, hm;
	printf("Quanto voce ganha por hora: ");
	scanf("%d",&gh);
	printf("Quantas horas voce trabalha por mes: ");
	scanf("%d",&hm);
	printf("Seu salario: %d",gh*hm);
}

