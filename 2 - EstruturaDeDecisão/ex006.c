// Fa�a um Programa que leia tr�s n�meros e mostre o maior deles.

#include<stdio.h>
main()
{
	int x, y, z;
	printf("Digite tres numeros com espacos entre eles: ");
	scanf("%d%d%d",&x, &y, &z);
	printf("%d  %d  %d\n",x, y, z);
	if ((x >= y) && (x >= z))
	{
		printf("Maior: %d",x);
	}
	else if ((y >= z) && (y >= x))
	{
		printf("Maior: %d",y);
	}
	else
	{
		printf("Maior: %d",z);
	}
}

