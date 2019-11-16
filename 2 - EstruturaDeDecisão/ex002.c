// Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.

#include<stdio.h>

main()
{
	int x;
	printf("Digite um numero: ");
	scanf("%d",&x);
	if (x > 0)
	{
		printf("O numero %d: positivo",x);
	}
	else if (x < 0)
	{
		printf("O numero %d: negativo", x);
	}
	else
	{
		printf("O numero %d: nulo",x);
	}
}

