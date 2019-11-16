// Faça um Programa que leia três números e mostre o maior e o menor deles.


#include<stdio.h>
main()
{
	int x, y, z;
	printf("Digite tres numeros com espacos entre eles: ");
	scanf("%d%d%d",&x, &y, &z);
	if ((x >= y) && (y >= z))
	{
		printf("Maior: %d\nMenor: %d",x, z);
	}
	else if ((x >= z) && (z >= y))
	{
		printf("Maior: %d\nMenor: %d",x, y);		
	}
	else if ((y >= x) && (x >= z))
	{
		printf("Maior: %d\nMenor: %d",y, y);		
	}
	else if ((y >= z) && (z >= x))
	{
		printf("Maior: %d\nMenor: %d",y, z);		
	}
	else if ((z >= x) && (x >= y))
	{
		printf("Maior: %d\nMenor: %d",z, y);		
	}
	else if ((z>= y) && (y >= x))
	{
		printf("Maior: %d\nMenor: %d",z, x);		
	}
}

