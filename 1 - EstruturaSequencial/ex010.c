// Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Farenheit.
// F = ((C * 1.8) + 32)
#include<stdio.h>
main()
{
	int C, F;
	printf("Digite a temperatura em graus Celsius: ");
	scanf("%d",&C);
	F = ((C * 1.8) + 32);
	printf("\nA temperatura em Farenheit: %d",F);
}


