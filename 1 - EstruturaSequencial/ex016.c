// Fa�a um programa para uma loja de tintas. O programa dever� pedir o tamanho em metros quadrados da �rea a ser pintada. 
// Considere que a cobertura da tinta � de 1 litro para cada 3 metros quadrados e que a tinta � vendida em latas de 18 litros, que custam R$ 80,00.
// Informe ao usu�rio a quantidades de latas de tinta a serem compradas e o pre�o total.


#include<stdio.h>

main()
{
	int metro=0, latas=0, litros=0, valor=0;
	printf("Quantos metros quadrados: ");
	scanf("%d",&metro);
	litros = metro / 3;
	if (metro % 54 == 0)
	{
		latas = metro / 54;
	}
	else
	{
		latas = int(metro / 54) + 1;
	}
	valor = latas * 80.00;
	printf("\nDeu: %d litros",litros);
	printf("\nDeu: %d latas",latas);
	printf("\nValor a se pagar: %d", valor);
}


