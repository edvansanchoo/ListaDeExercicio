// Faça um Programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada. 
// Considere que a cobertura da tinta é de 1 litro para cada 6 metros quadrados e que a tinta é vendida em latas de 18 litros, 
// que custam R$ 80,00 ou em galões de 3,6 litros, que custam R$ 25,00.
// Informe ao usuário as quantidades de tinta a serem compradas e os respectivos preços em 3 situações:
// comprar apenas latas de 18 litros;
// comprar apenas galões de 3,6 litros;
// misturar latas e galões, de forma que o preço seja o menor. Acrescente 10% de folga e sempre arredonde os valores para cima, isto é, considere latas cheias.


#include<stdio.h>

main()
{
	int metros=0, latas=0, litros=0, galao=0, valor=0, op;
	printf("Tamanho em metros quadrados: ");
	scanf("%d",&metros);
	printf("\n\n[1] Para latas: R$ 80.00 litro\n[2] Para galao: R$ 25.00 litros\n[3] Para latas e galao\n\nQual voce prefere: ");
	scanf("%d",&op);
	if (op == 1)
	{
		litros = metros / 6;
		if (metros % 108 == 0)
		{
			latas= metros / 108;
		}
		else
		{
			latas = metros / 108 + 1;
		}
		valor = latas * 80;
		printf("\nDeu: %d litros",litros);
		printf("\nDeu: %d latas",latas);
		printf("\nValor a se pagar: R$ %d", valor);
	}
	else if (op == 2)
	{
		litros = metros / 3.6;
		if (metros % 21 == 0)
		{
			galao = metros / 21.6;
		}
		else
		{
			galao = metros / 21.6 + 1;
		}
		valor = galao * 25;
		printf("\nDeu: %d litros",litros);
		printf("\nDeu: %d galoes",galao);
		printf("\nValor a se pagar: R$ %d", valor);
	}
	else if (op == 3)
	{
		if ((metros % 108 == 0) || (metros % 21 == 0))
		{
			latas = metros / 108;
			galao = metros / 21.6;
		}
		else
		{
			latas = metros / 108;
			galao = metros / 21.6;
		}
		valor = latas * 80 + galao * 25;
		printf("\nDeu: %d litros",litros);
		printf("\nDeu: %d latasa",latas);
		printf("\nDeu: %d galoes",galao);
		printf("\nValor a se pagar: R$ %d", valor- valor*10/100);
	}
	
}
