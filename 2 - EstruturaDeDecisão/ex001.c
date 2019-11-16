// Faça um Programa que peça dois números e imprima o maior deles.

#include<stdio.h>

main()
{
	int x, y;
	printf("Digite dos valores com espacos entres eles: ");
	scanf("%d%d",&x, &y);
	if (x > y)
	{
		printf("O maior: %d", x);
	}
	else
	{
		printf("O maior %d", y);
	}
}


