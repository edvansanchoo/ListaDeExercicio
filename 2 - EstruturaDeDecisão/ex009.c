// Faça um Programa que leia três números e mostre-os em ordem decrescente.

#include<stdio.h>
main()
{
	int x, y, z;
	printf("Digite tres numeros com espacos entre eles: ");
	scanf("%d%d%d",&x, &y, &z);
	if ((x >= y) && (y >= z))
	{
		printf("Ordem decrescente: %d %d %d",x, y, z);
	}
	else if ((x >= z) && (z >= y))
	{
		printf("Ordem decrescente: %d %d %d",x, z, y);		
	}
	else if ((y >= x) && (x >= z))
	{
		printf("Ordem decrescente: %d %d %d",y, x, z);		
	}
	else if ((y >= z) && (z >= x))
	{
		printf("Ordem decrescente: %d %d %d",y, z, x);		
	}
	else if ((z >= x) && (x >= y))
	{
		printf("Ordem decrescente: %d %d %d",z, x, y);		
	}
	else if ((z>= y) && (y >= x))
	{
		printf("Ordem decrescente: %d %d %d",z, y, x);		
	}
}

