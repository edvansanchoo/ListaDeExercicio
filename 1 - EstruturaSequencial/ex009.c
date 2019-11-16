// Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius.
//  C = (5 * (F-32) / 9).

#include<stdio.h>
main()
{
	float C;
	int F;
	printf("Digite a temperatura em Farenheit: ");
	scanf("%d",&F);
	C = (5 * (F-32) / 9);
	printf("O valor em Celsius: %2.f", C);
}

