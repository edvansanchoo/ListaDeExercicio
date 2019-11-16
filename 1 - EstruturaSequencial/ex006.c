// Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.

#include<stdio.h>

main()
{
	float PI = 3.14;
	int r;
	printf("Digite o raio do circulo: ");
	scanf("%d",&r);
	printf("\nA area e: %2.f", PI*(r*r));
}

