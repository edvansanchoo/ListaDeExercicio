// Fa�a um Programa que pe�a o raio de um c�rculo, calcule e mostre sua �rea.

#include<stdio.h>

main()
{
	float PI = 3.14;
	int r;
	printf("Digite o raio do circulo: ");
	scanf("%d",&r);
	printf("\nA area e: %2.f", PI*(r*r));
}

