// Fa�a um Programa que pe�a dois n�meros e imprima o maior deles.

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


