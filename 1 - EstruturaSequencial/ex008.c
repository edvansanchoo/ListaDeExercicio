// Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. 
// Calcule e mostre o total do seu salário no referido mês.

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

