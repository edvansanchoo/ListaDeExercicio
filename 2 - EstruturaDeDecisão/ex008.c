// Faça um programa que pergunte o preço de três produtos e informe qual produto você deve comprar, sabendo que a decisão é sempre pelo mais barato.

#include<stdio.h>
main()
{
	int x, y, z;
	printf("Digite com o preco de tres produtos com espacos entre eles: ");
	scanf("%d%d%d",&x, &y, &z);
	if ((x <= y) && (x <= z))
	{
		printf("Voce deve comprar o 1 produto\nEle custa: %d",x);
	}
	else if ((y <= z) && (y <= x))
	{
		printf("Voce deve comprar o 2 produto\nEle custa: %d",y);
	}
	else
	{
		printf("Voce deve comprar o 3 produto\nEle custa: %d",z);
	}
}

