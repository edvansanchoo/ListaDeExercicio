// Fa�a um Programa que pe�a os 3 lados de um tri�ngulo. O programa dever� informar se os valores podem ser um tri�ngulo. 
// Indique, caso os lados formem um tri�ngulo, se o mesmo �: equil�tero, is�sceles ou escaleno.
// Dicas:
// Tr�s lados formam um tri�ngulo quando a soma de quaisquer dois lados for maior que o terceiro;
// Tri�ngulo Equil�tero: tr�s lados iguais;
// Tri�ngulo Is�sceles: quaisquer dois lados iguais;
// Tri�ngulo Escaleno: tr�s lados diferentes;



#include<stdio.h>

main()
{
	int l1, l2, l3;
	printf("\nDigite os tres lados de um triangulo: ");
	scanf("%d%d%d",&l1, &l2, &l3);
	
	if ((l1 + l2 > l3) || (l2 + l3 > l1))
	{
		if ((l1 != l2) && (l1 != l3) && (l2 != l3))
		{
			printf("\nTriangulo Escaleno");
		}
		else if ((l1 == l2) && (l2 == l3))
		{
			printf("\nTriangulo Equilatero");
		}
		else if ((l1 == l2) || (l1 == l3) || (l2 == l3))
		{
			printf("\nTriangulo Isosceles");
		}
	}
	else
	{
		printf("\nO triangulo nao existe.");
	}
}
